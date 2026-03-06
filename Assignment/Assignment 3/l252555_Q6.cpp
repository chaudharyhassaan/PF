//// Name: Muhammad Hassaan Sajid
//// Roll No: 25L-2555
//// Q6 - Exam Results Analyzer with Topper
//
//# include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	int M1;
//	int M2;
//	int M3;
//	int M4;
//	int M5;
//	int total;
//	int aver;
//	int totalf = 0;
//	int finalf = 0;
//	int avef = 0;
//	int clasave = 0;
//	int avemax = 0;
//	int topp = 0;
//
//
//	cout << "Enter number of students:  ";
//	cin >> N;
//	cout << endl;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cout << "Student" << " " << i << endl;
//
//		cout << "Marks:-"<<endl;
//		cin >> M1;
//		cin >> M2;
//		cin >> M3;
//		cin >> M4;
//		cin >> M5;
//
//		if (M1 < 0 || M2 < 0 || M3 < 0 || M4 < 0 || M5 < 0) 
//		{
//			cout << "Invalid marks! Please enter non-negative values." << endl;
//			i--; // repeat same student
//			continue;
//		}
//
//		total = M1 + M2 + M3 + M4 + M5;
//		cout << "Total " << "=" << total<<endl;
//
//		aver = (M1 + M2 + M3 + M4 + M5) / 5;
//		cout << "Average "<<"=" << aver << endl;
//
//		totalf += total;
//		avef += aver;
//
//
//	
//		if (aver > avemax)
//		{
//			avemax = aver;
//			topp = i;
//		}
//	}
//	
//	clasave = avef / N;
//
//	cout << "Class Average =" << " " << clasave << endl;
//
//	
//	cout << "Topper:  " << "Student " << topp << " with " << avemax << "  average"<<endl;
//	
//	
//
//
//	system("pause");
//	return 0;
//}