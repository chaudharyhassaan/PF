// Name:Muhammad Hassaan Sajid
// Roll no:25L-2555
// Q2- Apply Discount

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

	cout << "Total Bill Before Discount=""\t" << total << "PKR" << endl;



	int disc;
	int fintotal;



	if (total > 500 && total < 1000) {
		disc = (total * 0.1);
		cout << "Discount=""\t" << disc << endl;
		fintotal = (total - disc);

		cout << "Final Bill=""\t" << fintotal;
	}

	else if (total >= 1000) {

		disc = (total * 0.2);
		cout << "Discount=""\t" << disc << endl;
		fintotal = (total - disc);

		cout << "Final Bill=""\t" << fintotal;
	}
	else {
		cout << "Discount=""\t" << "0" << endl;
		cout << "Final Bill=""\t" << total <<endl;
	}


	system("Pause");
	return 0;
}