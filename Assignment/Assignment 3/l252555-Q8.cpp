////Muhammad Hassaan Sajid
// //25L-2555
// //Q8
// 
//#include <iostream>
//using namespace std;
//
//void rotateRight(int arr[], int n, int k) {
//    k = k % n;
//    for (int i = 0; i < k; i++) {
//        int last = arr[n - 1];
//        for (int j = n - 1; j > 0; j--) {
//            arr[j] = arr[j - 1];
//        }
//        arr[0] = last;
//    }
//}
//
//void rotateLeft(int arr[], int n, int k) {
//    k = k % n;
//    for (int i = 0; i < k; i++) {
//        int first = arr[0];
//        for (int j = 0; j < n - 1; j++) {
//            arr[j] = arr[j + 1];
//        }
//        arr[n - 1] = first;
//    }
//}
//
//bool removeAt(int arr[], int& n, int index) {
//    if (index < 0 || index >= n) return false;
//    for (int i = index; i < n - 1; i++) {
//        arr[i] = arr[i + 1];
//    }
//    n--;
//    return true;
//}
//
//bool insertAt(int arr[], int& n, int index, int value) {
//    if (index < 0 || index > n) return false;
//    for (int i = n; i > index; i--) {
//        arr[i] = arr[i - 1];
//    }
//    arr[index] = value;
//    n++;
//    return true;
//}
//
//void printArray(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << arr[i];
//        if (i < n - 1) cout << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int n;
//    cout << "Enter shelf size: ";
//    cin >> n;
//
//    int shelf[100];
//    cout << "Enter shelf items:\n";
//    for (int i = 0; i < n; i++) {
//        cin >> shelf[i];
//    }
//
//    int k;
//    cout << "Enter rotation (right) k: ";
//    cin >> k;
//    rotateRight(shelf, n, k);
//    cout << "After Right Rotation: ";
//    printArray(shelf, n);
//
//    int value, idx;
//    cout << "Enter value to insert: ";
//    cin >> value;
//    cout << "Enter insert index: ";
//    cin >> idx;
//    if (insertAt(shelf, n, idx, value)) {
//        cout << "After Insert: ";
//        printArray(shelf, n);
//    }
//    else {
//        cout << "Invalid Insert Index\n";
//    }
//
//    int rIndex;
//    cout << "Enter index to remove: ";
//    cin >> rIndex;
//    if (removeAt(shelf, n, rIndex)) {
//        cout << "After Removal: ";
//        printArray(shelf, n);
//    }
//    else {
//        cout << "Invalid Removal Index\n";
//    }
//
//    return 0;
//}
