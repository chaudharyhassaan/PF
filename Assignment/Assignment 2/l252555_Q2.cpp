// Name: Muhammad Hassaan Sajid
// Roll No: 25L-2555
// Q2 - Seating Chart with 2 Reserved Seats

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    int r1, c1, r2, c2; 

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0)
    {
        cout << "Invalid input! Rows and columns must be positive.";
        return 0;
    }

    cout << "Enter reserved seat 1 (Row and Column): ";
    cin >> r1 >> c1;

    cout << "Enter reserved seat 2 (Row and Column): ";
    cin >> r2 >> c2;

    
    if (r1 < 1 || r1 > rows || c1 < 1 || c1 > cols ||
        r2 < 1 || r2 > rows || c2 < 1 || c2 > cols ||
        (r1 == r2 && c1 == c2))
    {
        cout << "Invalid reserved seat positions!" << endl;
        return 0;
    }

    cout << endl << "Seating Chart:" << endl;

    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            
            if ((i == r1 && j == c1) || (i == r2 && j == c2))
                cout << "[X] ";
            else
                cout << "[" << i << "," << j << "] ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
