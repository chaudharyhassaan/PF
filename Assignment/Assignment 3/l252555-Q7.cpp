////Muhammad Hassaan Sajid
// //25L-2555
// //Q7
//#include <iostream>
//using namespace std;
//
//const int MAXN = 5;
//
//bool validSize(int r, int c) {
//    return (r >= 1 && r <= MAXN && c >= 1 && c <= MAXN);
//}
//
//void inputMatrix(int mat[][MAXN], int r, int c, const string& name) {
//    cout << "Enter elements of Matrix " << name << " (" << r << "x" << c << "):\n";
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            cin >> mat[i][j];
//        }
//    }
//}
//
//void printMatrix(int mat[][MAXN], int r, int c) {
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            cout << mat[i][j];
//            if (j < c - 1) cout << " ";
//        }
//        cout << "\n";
//    }
//}
//
//bool addMatrices(int A[][MAXN], int B[][MAXN], int R, int C, int result[][MAXN]) {
//    for (int i = 0; i < R; ++i) {
//        for (int j = 0; j < C; ++j) {
//            result[i][j] = A[i][j] + B[i][j];
//        }
//    }
//    return true;
//}
//
//bool multiplyMatrices(int A[][MAXN], int B[][MAXN], int r1, int c1, int r2, int c2, int result[][MAXN], int& rr, int& cc) {
//    if (c1 != r2) return false;
//    rr = r1;
//    cc = c2;
//    for (int i = 0; i < rr; ++i) {
//        for (int j = 0; j < cc; ++j) {
//            result[i][j] = 0;
//            for (int k = 0; k < c1; ++k) {
//                result[i][j] += A[i][k] * B[k][j];
//            }
//        }
//    }
//    return true;
//}
//
//void transposeMatrix(int A[][MAXN], int r, int c, int T[][MAXN]) {
//    for (int i = 0; i < r; ++i) {
//        for (int j = 0; j < c; ++j) {
//            T[j][i] = A[i][j];
//        }
//    }
//}
//
//int main() {
//    int r1, c1, r2, c2;
//    int A[MAXN][MAXN], B[MAXN][MAXN];
//
//    cout << "Enter rows and columns for Matrix A (max 5 5): ";
//    cin >> r1 >> c1;
//    if (!validSize(r1, c1)) {
//        cout << "Invalid size for Matrix A.\n";
//        return 0;
//    }
//
//    inputMatrix(A, r1, c1, "A");
//
//    cout << "Enter rows and columns for Matrix B (max 5 5): ";
//    cin >> r2 >> c2;
//    if (!validSize(r2, c2)) {
//        cout << "Invalid size for Matrix B.\n";
//        return 0;
//    }
//
//    inputMatrix(B, r2, c2, "B");
//
//    cout << "\nAddition:\n";
//    if (r1 == r2 && c1 == c2) {
//        int addRes[MAXN][MAXN];
//        addMatrices(A, B, r1, c1, addRes);
//        printMatrix(addRes, r1, c1);
//    }
//    else {
//        cout << "Matrices not conformable for addition.\n";
//    }
//
//    cout << "\nMultiplication:\n";
//    int mulRes[MAXN][MAXN], rr, cc;
//    if (multiplyMatrices(A, B, r1, c1, r2, c2, mulRes, rr, cc)) {
//        printMatrix(mulRes, rr, cc);
//    }
//    else {
//        cout << "Matrices not conformable for multiplication.\n";
//    }
//
//    cout << "\nTranspose of A:\n";
//    int tA[MAXN][MAXN];
//    transposeMatrix(A, r1, c1, tA);
//    printMatrix(tA, c1, r1);
//
//    return 0;
//}
