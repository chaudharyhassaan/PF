////Muhammad Hassaan Sajid
// //25L-2555
// //Q4
//#include <iostream>
//using namespace std;
//
//bool validateID(char id[]);
//bool isUpperLetter(char c);
//bool isDigitChar(char c);
//
//int main()
//{
//    char id[20];
//
//    while (true)
//    {
//        cout << "Enter ID (XXX-1234-X): ";
//        cin >> id;
//
//        if (validateID(id))
//        {
//            cout << "Valid ID";
//            break;
//        }
//        else
//        {
//            cout << "Invalid ID, try again.\n";
//        }
//    }
//
//    return 0;
//}
//
//bool validateID(char id[])
//{
//    int length = 0;
//    while (id[length] != '\0')
//        length++;
//
//    if (length != 10)
//        return false;
//
//    for (int i = 0; i < length; i++)
//    {
//        if (id[i] == ' ')
//            return false;
//
//        if (id[i] >= 'a' && id[i] <= 'z')
//            return false;
//
//        if (!(isDigitChar(id[i]) || isUpperLetter(id[i]) || id[i] == '-'))
//            return false;
//    }
//
//    if (!isUpperLetter(id[0])) return false;
//    if (!isUpperLetter(id[1])) return false;
//    if (!isUpperLetter(id[2])) return false;
//    if (id[3] != '-') return false;
//
//    if (!isDigitChar(id[4])) return false;
//    if (!isDigitChar(id[5])) return false;
//    if (!isDigitChar(id[6])) return false;
//    if (!isDigitChar(id[7])) return false;
//
//    if (id[8] != '-') return false;
//
//    if (!isUpperLetter(id[9])) return false;
//
//    return true;
//}
//
//bool isUpperLetter(char c)
//{
//    return (c >= 'A' && c <= 'Z');
//}
//
//bool isDigitChar(char c)
//{
//    return (c >= '0' && c <= '9');
//}
