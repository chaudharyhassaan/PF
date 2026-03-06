#include <iostream>
#include <string>
#include<fstream>
using namespace std;

struct products
{
    string ID;
    string name;
    double price = 0.0;
    int quantity = 0;
};

struct sales
{
    string ID;
    string name;
    double price = 0.0;
    int quantity = 0;
};

//**********Functions Prototypes**********//

void addproducts(products product[], int& productCount);
void deleteproducts(products product[], int& productCount);
void updateproduct(products product[], int productCount);
void viewproducts(products product[], int productcount);
void searchproduct(products product[], int productcount);
void recordsale(products product[], sales sale[], int productcount, int& salescount);
void viewsales(sales sale[], int salescount);
void topselling(sales sale[], int salescount);
double totalrevenue(sales sale[], int salescount);

//***********File handling functions**********//

void saveproducts(products product[], int productCount);
void loadproducts(products product[], int& productCount);
void savesales(sales sale[], int salescount);
void loadsales(sales sale[], int& salescount);

int main()
{
    cout << "---------------------------------------------------" << endl;
    cout << "------- Inventory and sales tracking system -------" << endl;
    cout << "---------------------------------------------------" << endl << endl;

    const int max = 100;
    products product[max];
    int productCount = 0;
    sales sale[max];
    int salescount = 0;

    loadproducts(product, productCount);
    cout << endl;
    loadsales(sale, salescount);
    cout << endl;



    while (true)
    {

        cout << "\n---------------MENU-----------------" << endl;
        cout << "1.  Add Product." << endl;
        cout << "2.  Update Product." << endl;
        cout << "3.  Delete Product." << endl;
        cout << "4.  View Products available in stock." << endl;
        cout << "5.  Search Product by ID." << endl;
        cout << "6.  Record a sale." << endl;
        cout << "7.  View all sales." << endl;
        cout << "8.  Top-selling product(s)." << endl;
        cout << "9.  Total revenue generated." << endl;
        cout << "10. Exit." << endl;
        cout << "------------------------------------" << endl << endl;

        int choice;
        cout << "Enter a number to proceed: ";
        cin >> choice;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input! Only numbers allowed.\n";
            continue;
        }
        if (choice < 1 || choice > 10)
        {
            cout << "\nInvalid Input! Try Again!\n";
            continue;
        }
        cout << endl;



        switch (choice)
        {
        case 1:
        {
            addproducts(product, productCount);
            saveproducts(product, productCount);
            break;
        }
        case 2:
        {
            updateproduct(product, productCount);
            saveproducts(product, productCount);
            break;
        }
        case 3:
        {
            deleteproducts(product, productCount);
            saveproducts(product, productCount);
            break;
        }
        case 4:
        {
            viewproducts(product, productCount);
            break;
        }
        case 5:
        {
            searchproduct(product, productCount);
            break;
        }
        case 6:
        {
            recordsale(product, sale, productCount, salescount);
            savesales(sale, salescount);
            break;
        }
        case 7:
        {
            viewsales(sale, salescount);
            break;

        }
        case 8:
        {

            topselling(sale, salescount);
            break;
        }
        case 9:
        {
            cout << "Total Revenue generated: " << totalrevenue(sale, salescount) << endl << endl;
            break;
        }
        case 10:
        {
            saveproducts(product, productCount);
            savesales(sale, salescount);
            return 0;
        }

        }
    }
    system("pause");
    return 0;
}

//**********Adding a product**********//

void addproducts(products product[], int& productCount)
{
    if (productCount >= 100)
    {
        cout << "Inventory full! Cannot add more products.\n";
        return;
    }


    cout << "------ Add New Product ------" << endl;

    //*****Validation to just get ID*****//

    string temp;

    while (true)
    {
        cout << "\nEnter Product ID: ";
        cin >> temp;

        bool valid = true;

        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] < '0' || temp[i] > '9')
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            cout << "Invalid ID! Only numbers are allowed.\n";
        }
        else
        {
            product[productCount].ID = temp;
            break;
        }
    }
    for (int i = 0; i < productCount; i++)
    {

        if (product[productCount].ID == product[i].ID)
        {
            cout << " \nProduct already exist ." << endl;
            return;
        }
    }
    cin.ignore();
    string tempname;
    while (true)
    {
        //*****Validation for product name*****////WE are unable to do anything about products with spaces//

        cout << "Enter Product Name(PLease do not use space between words as it will not load products from file(--..--): ";
        getline(cin, tempname);

        bool valid = true;

        for (int i = 0; i < tempname.length(); i++)
        {
            char ch = tempname[i];
            if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == ' '))
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            product[productCount].name = tempname;
            break;
        }
        else
        {
            cout << "Invalid Name! Only letters and spaces allowed.\n";
        }
    }


    while (true)
    {
        //*****Validation for product price*****//

        cout << "Enter Product Price: ";
        cin >> product[productCount].price;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Only whole numbers allowed.\n";
        }
        else if (product[productCount].price < 0)
        {
            cout << "Invalid input! Price cannot be negative.\n";
        }
        else if (product[productCount].price == 0)
        {
            cout << "I think you want to sell this item for free!!" << endl;;
        }
        else
        {
            cin.ignore(1000, '\n');
            break;
        }
    }

    while (true)
    {
        //*****VAlidation for product quantity*****//

        cout << "Enter Product Quantity: ";
        cin >> product[productCount].quantity;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Only whole numbers allowed.\n";
        }
        else if (product[productCount].quantity < 0)
        {
            cout << "Invalid input! Quantity cannot be negative.\n";
        }
        else if (product[productCount].quantity == 0)
        {
            cout << "Nah bro! You wanna play with me by adding 0 itmes!! Ahh!! " << endl;
        }
        else
        {
            cin.ignore(1000, '\n');
            break;
        }
    }

    cout << " \n " << product[productCount].ID << "|" << product[productCount].name << "|" << product[productCount].price << "|" << product[productCount].quantity << endl;

    productCount++;

    cout << "Product added successfully!" << endl << endl;

}

//**********Deleting a product**********//

void deleteproducts(products product[], int& productCount)
{


    cout << "------ Delete Product By ID ------" << endl;

    string idfordelete;

    while (true)
    {
        cout << "\nEnter Product ID: ";
        cin >> idfordelete;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid ID! Only numbers are allowed.\n";
        }
        else
        {
            break;
        }
    }

    if (productCount < 1)
    {
        cout << "\nNo products available!" << endl << endl;
        return;
    }

    bool found = false;

    for (int i = 0; i < productCount; i++)
    {
        if (product[i].ID == idfordelete)
        {
            found = true;

            // Shift all products left by one starting from i
            for (int j = i; j < productCount - 1; j++)
            {
                product[j] = product[j + 1];
            }

            productCount--; // Decrease product count

            cout << "\nProduct with ID " << idfordelete << " deleted successfully." << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "\nProduct not found!" << endl;
    }


}

//**********Updating a product**********//

void updateproduct(products product[], int productCount)
{

    cout << "------ Update Product By ID ------" << endl;

    string nametobeupdated;
    double pricetobeupdated;
    int quantitytobeupdated;

    string idforupdate;

    while (true)
    {
        cout << "\nEnter Product ID: ";
        cin >> idforupdate;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid ID! Only numbers are allowed.\n";
        }
        else
        {

            break;
        }
    }

    for (int i = 0; i < productCount; i++)
    {
        if (idforupdate == product[i].ID)
        {

            cin.ignore();
            while (true)
            {
                cout << "Enter Product Name to edit: ";
                getline(cin, nametobeupdated);

                bool valid = true;

                for (int i = 0; i < nametobeupdated.length(); i++)
                {
                    char ch = nametobeupdated[i];
                    if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == ' '))
                    {
                        valid = false;
                        break;
                    }
                }

                if (valid)
                {
                    product[i].name = nametobeupdated;
                    break;
                }
                else
                {
                    cout << "\nInvalid Name! Only letters and spaces allowed.";
                }
            }

            while (true)
            {
                cout << "\nEnter Product Price to be updated: ";
                cin >> pricetobeupdated;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nInvalid input! Only whole numbers allowed.\n";
                }
                else if (pricetobeupdated < 0)
                {
                    cout << "Invalid input! Price cannot be negative.\n";
                }
                else if (pricetobeupdated == 0)
                {
                    cout << "\nI think you want to sell this item for free!!" << endl;;
                }
                else
                {
                    cin.ignore(1000, '\n');
                    break;
                }
            }

            while (true)
            {
                cout << "\nEnter Product quantity to be updated: ";
                cin >> quantitytobeupdated;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Only whole numbers allowed.\n";
                }
                else if (quantitytobeupdated < 0)
                {
                    cout << "Invalid input! Quantity cannot be negative.\n";
                }
                else if (quantitytobeupdated == 0)
                {
                    cout << "I think you dont want to add an item!!" << endl;;
                }
                else
                {
                    cin.ignore(1000, '\n');
                    break;
                }
            }

            product[i].name = nametobeupdated;
            product[i].price = pricetobeupdated;
            product[i].quantity = quantitytobeupdated;

            cout << " \n " << product[i].ID << "|" << product[i].name << "|" << product[i].price << "|" << product[i].quantity << endl;

            cout << "\nProduct updated successfully!" << endl;
            break;
        }
        else if (i == productCount - 1)
        {
            cout << "\nProduct not found!" << endl;
            break;
        }
    }
}

//**********Viewing a product**********//

void viewproducts(products product[], int productcount)
{

    cout << "------ All Available Products in Stock ------" << endl;

    cout << "\n-------- Total " << productcount << " Product(s) ---------" << endl<<endl;


    for (int i = 0; i < productcount; i++)
    {
        if (productcount > 0)
        {
            cout << product[i].ID << "|" << product[i].name << "|" << product[i].price << "|" << product[i].quantity << endl;
        }
        else
        {
            cout << "\nStock is empty";
            break;
        }
        cout << endl;
    }
    cout << endl;

}

//**********Searching product by ID**********//

void searchproduct(products product[], int productcount)
{
    cout << "------ Search Product by ID ------" << endl;

    string idforsearch;
    while (true)
    {
        cout << "\nEnter Product ID: ";
        cin >> idforsearch;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid ID! Only numbers are allowed.\n";
        }
        else
        {

            break;
        }
    }

    for (int i = 0; i < productcount; i++)
    {
        if (idforsearch == product[i].ID)
        {
            cout << " \n Product founded successfully \n" << product[i].ID << "|" << product[i].name << "|" << product[i].price << "|" << product[i].quantity << endl;
            break;
        }
        else if (i == productcount - 1)
        {
            cout << "\nProduct not found!" << endl;
            break;
        }
    }

    cout << endl;


}

//**********Recording Sales**********//

void recordsale(products product[], sales sale[], int productcount, int& salescount)
{


    if (productcount == 0)
    {
        cout << "\nNo product in inventory" << endl;
        return;
    }


    cout << "----- Record a sale -----" << endl;

    cout << "\nEnter ID of product: ";
    cin >> sale[salescount].ID;

    for (int i = 0; i < productcount; i++)
    {
        if (sale[salescount].ID == product[i].ID)
        {
            while (true)
            {
                cout << "\nEnter Product Quantity: ";
                cin >> sale[salescount].quantity;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nInvalid input! Only whole numbers allowed.\n";
                }
                else if (sale[salescount].quantity < 0)
                {
                    cout << "Invalid input! Quantity cannot be negative.\n";
                }
                else if (sale[salescount].quantity > product[i].quantity)
                {
                    cout << "Error: Not Enough stock\n";
                    return;
                }
                else if (sale[salescount].quantity == 0)
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Nah bro! You wanna play with me by adding 0 itmes!! Ahhaaa!! " << endl;
                }
                else
                {
                    cin.ignore(1000, '\n');
                    break;
                }
            }

            sale[salescount].name = product[i].name;
            sale[salescount].price = product[i].price;

            product[i].quantity -= sale[salescount].quantity;



            cout << " \n " << sale[salescount].ID << "|" << sale[salescount].name << "|" << sale[salescount].price << "|" << sale[salescount].quantity << endl;
           
            cout << "\nTotal Bill: " << sale[salescount].price * sale[salescount].quantity<<endl;
            salescount++;
            break;
        }
        else if (i == productcount - 1)
        {
            cout << "\nProduct not found!" << endl;
            break;
        }
    }
    cout << endl;
}

//**********Viewing Sales**********//

void viewsales(sales sale[], int salescount)
{
    cout << "------ All Sales made ------" << endl;
    cout << "\n------ Total " << salescount << " Sales made -------" << endl << endl;
    for (int i = 0; i < salescount; i++)
    {
        if (salescount > 0)
        {
            cout << "\n " << sale[i].ID << " | " << sale[i].name << " | " << sale[i].price << " | " << sale[i].quantity << endl;
        }
        else
        {
            cout << "\nNo sale is made";
            break;
        }
        cout << endl;
    }


    cout << endl;
}

//**********Determination of Top Selling Product**********//

void topselling(sales sale[], int salescount)
{
    if (salescount == 0)
    {
        cout << "\nNo product has been sold yet.\n";
        return;
    }

    cout << "------ Top Selling Product(s) ------" << endl;


    int maxQty = sale[0].quantity;
    for (int i = 1; i < salescount; i++)
    {
        if (sale[i].quantity > maxQty)
        {
            maxQty = sale[i].quantity;
        }
    }


    cout << "\nProducts with highest sales (" << maxQty << " units sold):\n";

    for (int i = 0; i < salescount; i++)
    {
        if (sale[i].quantity == maxQty)
        {
            cout << sale[i].ID << " | " << sale[i].name << " | " << sale[i].price << " | " << sale[i].quantity << endl;
        }
    }

    cout << endl;
}

//**********Total Revenue Calculations**********//

double totalrevenue(sales sale[], int salescount)
{
    cout << "------ Total Revenue Made ------" << endl;
    double revenue = 0.0;
    for (int i = 0; i < salescount; i++)
    {
        if (salescount > 0)
        {

            revenue += sale[i].price * sale[i].quantity;
        }
        else
        {
            cout << "\nNo sale is made";
            break;
        }

    }

    return revenue;
}

//**********Saving products to a file**********//

void saveproducts(products product[], int productCount)
{
    ofstream productsout("Products.txt");

    if (!productsout)
    {
        cout << "\nCan not open the file!" << endl;
        return;
    }
    for (int i = 0; i < productCount; i++)
    {
        productsout << product[i].ID << " " << product[i].name << " " << product[i].price << " " << product[i].quantity << endl;

    }
    productsout.close();
    cout << "Products saved.\n";

}

//**********Loading Products From File**********//

void loadproducts(products product[], int& productCount)
{
    ifstream productsin("Products.txt");
    if (!productsin)
    {
        cout << "\nNo products file found." << endl;
        productCount = 0;
        return;
    }

    productCount = 0;
    while (productsin >> product[productCount].ID >> product[productCount].name >> product[productCount].price >> product[productCount].quantity)
    {
        productCount++;
    }

    productsin.close();
    cout << "\nProducts loaded successfully! Total: " << productCount << endl;
}

//**********Saving Sales in the File**********//

void savesales(sales sale[], int salescount)
{
    ofstream salesout("Sales.txt");

    if (!salesout)
    {
        cout << "\nCan not open the file!" << endl;
        return;
    }
    for (int i = 0; i < salescount; i++)
    {
        salesout << sale[i].ID << " " << sale[i].name << " " << sale[i].price << " " << sale[i].quantity << endl;
    }
    salesout.close();
   
}

//**********Loading Sales to program**********//

void loadsales(sales sale[], int& salescount)
{
    ifstream salesin("Sales.txt");
    if (!salesin)
    {
        cout << "\nNo Sales file found." << endl;
        salescount = 0;
        return;
    }

    salescount = 0;
    while (salesin >> sale[salescount].ID >> sale[salescount].name >> sale[salescount].price >> sale[salescount].quantity)
    {
        salescount++;
    }

    salesin.close();
    cout << "\nSales loaded successfully! Total: " << salescount << endl;
}

