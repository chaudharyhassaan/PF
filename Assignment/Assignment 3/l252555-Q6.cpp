////Muhammad Hassaan Sajid
// //25L-2555
// //Q6
//#include <iostream>
//using namespace std;
//
//void inputMatrix(int matrix[][5], int rows, int cols);
//void printMatrix(int matrix[][5], int rows, int cols);
//void addMatrix(int A[][5], int B[][5], int result[][5], int rows, int cols);
//void multiplyMatrix(int A[][5], int B[][5], int result[][5], int rowsA, int colsA, int colsB);
//void transposeMatrix(int A[][5], int T[][5], int rows, int cols);
//
//int main()
//{
//    int rowsA, colsA;
//    cout << "Enter rows and columns of Matrix A (1-5): ";
//    cin >> rowsA >> colsA;
//
//    if (rowsA < 1 || rowsA > 5 || colsA < 1 || colsA > 5)
//    {
//        cout << "Invalid size";
//        return 0;
//    }
//
//    int A[5][5];
//    cout << "Enter Matrix A:" << endl;
//    inputMatrix(A, rowsA, colsA);
//
//    int rowsB, colsB;
//    cout << "Enter rows and columns of Matrix B (1-5): ";
//    cin >> rowsB >> colsB;
//
//    if (rowsB < 1 || rowsB > 5 || colsB < 1 || colsB > 5)
//    {
//        cout << "Invalid size";
//        return 0;
//    }
//
//    int B[5][5];
//    cout << "Enter Matrix B:" << endl;
//    inputMatrix(B, rowsB, colsB);
//
//    if (rowsA == rowsB && colsA == colsB)
//    {
//        int sumMatrix[5][5];
//        addMatrix(A, B, sumMatrix, rowsA, colsA);
//        cout << "Addition:" << endl;
//        printMatrix(sumMatrix, rowsA, colsA);
//    }
//    else
//    {
//        cout << "Addition not possible" << endl;
//    }
//
//    if (colsA == rowsB)
//    {
//        int productMatrix[5][5];
//        multiplyMatrix(A, B, productMatrix, rowsA, colsA, colsB);
//        cout << "Multiplication:" << endl;
//        printMatrix(productMatrix, rowsA, colsB);
//    }
//    else
//    {
//        cout << "Multiplication not possible" << endl;
//    }
//
//    int transposeA[5][5];
//    transposeMatrix(A, transposeA, rowsA, colsA);
//    cout << "Transpose of A:" << endl;
//    printMatrix(transposeA, colsA, rowsA);
//
//    return 0;
//}
//
//void inputMatrix(int matrix[][5], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            cin >> matrix[i][j];
//}
//
//void printMatrix(int matrix[][5], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//            cout << matrix[i][j] << " ";
//        cout << endl;
//    }
//}
//
//void addMatrix(int A[][5], int B[][5], int result[][5], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            result[i][j] = A[i][j] + B[i][j];
//}
//
//void multiplyMatrix(int A[][5], int B[][5], int result[][5], int rowsA, int colsA, int colsB)
//{
//    for (int i = 0; i < rowsA; i++)
//    {
//        for (int j = 0; j < colsB; j++)
//        {
//            result[i][j] = 0;
//            for (int k = 0; k < colsA; k++)
//                result[i][j] += A[i][k] * B[k][j];
//        }
//    }
//}
//
//void transposeMatrix(int A[][5], int T[][5], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            T[j][i] = A[i][j];
//}
