////Muhammad Hassaan Sajid
// //25L-2555
// //Q5
// 
//#include <iostream>
//using namespace std;
//
//void inputArray(int arr[], int size);
//bool exists(int arr[], int size, int val);
//void unionSet(int A[], int N, int B[], int M, int result[], int& rSize);
//void intersectionSet(int A[], int N, int B[], int M, int result[], int& rSize);
//void differenceSet(int A[], int N, int B[], int M, int result[], int& rSize);
//
//int main()
//{
//    int A[100], B[100];
//    int N, M;
//
//    do
//    {
//        cout << "Enter size of A (1-100): ";
//        cin >> N;
//        if (N <= 0 || N > 100)
//            cout << "Invalid size.\n";
//    } while (N <= 0 || N > 100);
//
//    cout << "Enter elements of A:\n";
//    inputArray(A, N);
//
//    do
//    {
//        cout << "Enter size of B (1-100): ";
//        cin >> M;
//        if (M <= 0 || M > 100)
//            cout << "Invalid size.\n";
//    } while (M <= 0 || M > 100);
//
//    cout << "Enter elements of B:\n";
//    inputArray(B, M);
//
//    int U[200], I[200], D[200];
//    int uSize = 0, iSize = 0, dSize = 0;
//
//    unionSet(A, N, B, M, U, uSize);
//    intersectionSet(A, N, B, M, I, iSize);
//    differenceSet(A, N, B, M, D, dSize);
//
//    cout << "\nUnion: ";
//    for (int i = 0; i < uSize; i++)
//        cout << U[i] << " ";
//    cout << "\nIntersection: ";
//    for (int i = 0; i < iSize; i++)
//        cout << I[i] << " ";
//    cout << "\nDifference (A-B): ";
//    for (int i = 0; i < dSize; i++)
//        cout << D[i] << " ";
//
//    return 0;
//}
//
//void inputArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr[i];
//    }
//}
//
//bool exists(int arr[], int size, int val)
//{
//    for (int i = 0; i < size; i++)
//        if (arr[i] == val)
//            return true;
//    return false;
//}
//
//void unionSet(int A[], int N, int B[], int M, int result[], int& rSize)
//{
//    for (int i = 0; i < N; i++)
//        if (!exists(result, rSize, A[i]))
//            result[rSize++] = A[i];
//
//    for (int i = 0; i < M; i++)
//        if (!exists(result, rSize, B[i]))
//            result[rSize++] = B[i];
//}
//
//void intersectionSet(int A[], int N, int B[], int M, int result[], int& rSize)
//{
//    for (int i = 0; i < N; i++)
//        if (exists(B, M, A[i]) && !exists(result, rSize, A[i]))
//            result[rSize++] = A[i];
//}
//
//void differenceSet(int A[], int N, int B[], int M, int result[], int& rSize)
//{
//    for (int i = 0; i < N; i++)
//        if (!exists(B, M, A[i]) && !exists(result, rSize, A[i]))
//            result[rSize++] = A[i];
//}
