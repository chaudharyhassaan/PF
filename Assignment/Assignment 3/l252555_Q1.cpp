//
//// Name: Muhammad Hassaan Sajid
//// Roll No: 25L-2555
//// Q1 - Cafeteria Order Summary with Validation
//
//# include <iostream>
//using namespace std;
//int main()
//
//{
//	int nos;
//	int bur;
//	int drink;
//	int sand;
//	int burcou = 0;
//	int dricou =0;
//	int sancou =0;
//
//	cout << "Enter number of students:";
//	cin >> nos;
//
//	if (nos >= 1)
//	{
//
//		for (int i = 1; i <= nos; i++)
//		{
//			cout << "Student" << i<<"  "<<endl;
//
//
//			cout << "Burgers: ";
//			cin >> bur;
//			while (bur < 0) 
//			{
//				cout << "Invalid Input! Enter again: ";
//				cin >> bur;
//			}
//			
//			burcou += bur;
//
//			
//			
//			cout << "Sandwiches: ";
//			
//			cin >> sand;
//			
//			while (sand < 0) 
//			{
//				cout << "Invalid Input! Enter again: ";
//				cin >> sand;
//			}
//			
//			sancou += sand;
//
//			
//			
//			cout << "Drinks: ";
//			
//			cin >> drink;
//			
//			while (drink < 0) 
//			{
//				cout << "Invalid Input! Enter again: ";
//				cin >> drink;
//			}
//		
//			dricou += drink;
//		}
//			
//         
//
//
//
//
//		cout << "Total Burgers Sold =" << " " << burcou << endl;
//
//		cout << "Total Sandwiches Sold =" << " " << sancou << endl;
//
//		cout << "Total Drinks Sold =" << " " << dricou << endl;
//
//
//
//
//		if (burcou > sancou && burcou > dricou)
//		{
//			cout << "Most Sold Item: Burgers";
//		}
//		
//		
//		else if (sancou > burcou && sancou > dricou)
//		{
//			cout << "Most Sold Item: Sandwiches";
//		}
//		
//		
//		
//		else if (dricou > burcou && dricou > sancou)
//		{
//			cout << "Most Sold Item: Drinks";
//		}
//
//
//		else if (burcou == sancou && burcou == dricou)
//		{
//			cout << "Most Sold Item: Burgers and Sandwiches and Drinks";
//		}
//
//
//
//		else if (burcou == sancou)
//		{
//			cout << "Most Sold Item: Burgers and Sandwiches(tie)";
//		}
//
//
//
//		else if (burcou == dricou)
//		{
//			cout<< "Most Sold Item: Burgers and Drinks(tie)";
//		}
//
//
//
//		else if (sancou == dricou)
//		{
//			cout << "Most Sold Item: Drinks and Sandwiches(tie)";
//		}
//		
//	}
//
//	else
//	{
//		cout << "Invalid input!";
//	}
//	system("Pause");
//	return 0;
//}