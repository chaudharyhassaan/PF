 //Name:Muhammad Hassaan Sajid
 //Roll no:25L-2555
 //Q6 - Cheapest Item Finder

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
	cout << "2. Pizza Slices (Rs. " << pizzaslice<< ")\n";
	cout << "3. Sandwich (Rs. " << sandwiches << ")\n\n";



	cout << "Enter the quantity of burger:""\t";
 	cin >> qty1;

	cout << "Enter the quantity of Pizza slices:""\t";
	cin >> qty2;

	cout << "Enter the quantity of Sandwiches:""\t";
	cin >> qty3;

	int bgtl = (burger * qty1);
	int pstl = (pizzaslice * qty2); 
	int swtl = (sandwiches * qty3);

	cout << "Burger Cost""\t" << "=" << bgtl<<endl;
	cout << "Pizza Cost""\t" << "=" << pstl << endl;
	cout << "Sandwich Cost""\t" << "=" << swtl << endl;



	int minCost = bgtl;

	if (pstl < minCost) minCost = pstl;
	if (swtl< minCost) minCost = swtl;

	cout << "\nItem(s) with least cost: ";
	if (bgtl== minCost) cout << "Burger ";
	if (pstl == minCost) cout << "Pizza Slice ";
	if (swtl == minCost) cout << "Sandwich ";


	system("Pause");
	return 0;
}