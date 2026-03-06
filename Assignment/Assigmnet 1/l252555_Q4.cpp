// Name:Muhammad Hassaan Sajid
// Roll no:25L-2555
// Q4 - Student Eligibility for Meal Deal

#include <iostream>
using namespace std;
int main()
{
	int burger = 200;
	int pizzaslice = 150;
	int sandwiches = 100;

	int qty1, qty2, qty3;


	cout << "Welcome to the Canteen!\n";
	cout << "We have 3 items:\n";
	cout << "1. Burger (Rs. " << burger << ")\n";
	cout << "2. Pizza Slice (Rs. " << pizzaslice<< ")\n";
	cout << "3. Sandwich (Rs. " << sandwiches << ")\n\n";



	cout << "Enter the quantity of burger:""\t";
 	cin >> qty1;

	cout << "Enter the quantity of Pizza slices:""\t";
	cin >> qty2;

	cout << "Enter the quantity of Sandwiches:""\t";
	cin >> qty3;


	int total = (qty1 * burger) + (qty2 * pizzaslice) + (qty3 * sandwiches);

	cout << "Total Bill""\t"<<"=" << total << "PKR" << endl;


	if ((qty1 >= 2 && qty2 >= 1) || total >= 700)
	{
		cout<<"Eligible for Free Drink"<<endl;
	}
	else
	{
		cout << "Not Eligible for Free Drink"<<endl;
	}
	system("Pause");
	return 0;
}