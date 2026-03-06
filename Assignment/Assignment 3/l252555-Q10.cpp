////Muhammad Hassaan Sajid
// //25L-2555
// //Q10
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int R, C;
//    cout << "Enter rows and columns: ";
//    cin >> R >> C;
//
//    // validation for minimum size matrix
//    if (R < 2 || C < 2) {
//        cout << "Largest Balanced Submatrix Area: 0";
//        return 0;
//    }
//
//    int a[50][50];
//    cout << "Enter matrix values:\n";
//
//    bool allEven = true, allOdd = true;
//
//    for (int i = 0; i < R; i++) {
//        for (int j = 0; j < C; j++) {
//            cin >> a[i][j];
//
//            // checking for all-even and all-odd case
//            if (a[i][j] % 2 == 0)
//                allOdd = false;
//            else
//                allEven = false;
//        }
//    }
//
//    // if matrix is fully even or fully odd, answer is 0
//    if (allEven || allOdd) {
//        cout << "Largest Balanced Submatrix Area: 0";
//        return 0;
//    }
//
//    int maxArea = 0;
//
//    // checking every possible submatrix (minimum 2x2)
//    for (int r1 = 0; r1 < R; r1++) {
//        for (int c1 = 0; c1 < C; c1++) {
//
//            for (int r2 = r1 + 1; r2 < R; r2++) {   // ensure 2 rows
//                for (int c2 = c1 + 1; c2 < C; c2++) {   // ensure 2 cols
//
//                    int even = 0, odd = 0;
//
//                    // count even and odd inside this submatrix
//                    for (int i = r1; i <= r2; i++) {
//                        for (int j = c1; j <= c2; j++) {
//                            if (a[i][j] % 2 == 0)
//                                even++;
//                            else
//                                odd++;
//                        }
//                    }
//
//                    // balanced check
//                    if (even == odd) {
//                        int area = (r2 - r1 + 1) * (c2 - c1 + 1);
//                        if (area > maxArea) {
//                            maxArea = area;
//                        }
//                    }
//
//                }
//            }
//        }
//    }
//
//    cout << "Largest Balanced Submatrix Area: " << maxArea;
//
//    return 0;
//}
