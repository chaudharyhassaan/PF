//#include<iostream>
//#include<string>
// 
// //Muhammad Hassaan Sajid
// //25L-2555
// //Q9
// 
// 
//using namespace std;
//int main()
//{
//	int timeslots;
//	int rooms;
//
//	cout << "Enter time slots (rows): ";
//	cin >> timeslots;
//
//	cout << "Enter rooms (columns): ";
//    cin >> rooms;
//
//    string arr[100][100]; 
//
//    for (int i = 0; i < timeslots; i++)
//    {
//        for (int j = 0; j < rooms; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//
//    cout << endl;
//
//    for (int i = 0; i < timeslots; i++)
//    {
//        for (int j = 0; j < rooms; j++)
//        {
//            cout << arr[i][j] << "  ";
//        }
//        cout << endl;
//    }
//
//    int emptycount = 0;
//    for (int i = 0; i < timeslots; i++)
//    {
//        for (int j = 0; j < rooms; j++)
//        {
//            if (arr[i][j] == "--")
//            {
//                emptycount++;
//            }
//        }
//    }
//
//    int repeatcount = 0;
//
//    for (int i = 0; i < timeslots; i++)
//    {
//        for (int j = 0; j < rooms-1; j++)
//        {
//            if (arr[i][j]==arr[i+1][j] && arr[i][j]!="--")
//            {
//                cout << "Conflict: " << arr[i][j] << " appears consecutively in Room " << j + 1 << endl;
//            }
//        }
//    }
//
//    for (int i = 0; i < timeslots; i++)
//    {
//        for (int j = 0; j < rooms; j++)
//        {
//            for (int k = j + 1; k < rooms; k++)
//            {
//                if (arr[i][j] == arr[i][k] && arr[i][j] != "--")
//                {
//                    cout << "Conflict: " << arr[i][j] << " appears twice in Slot " << i + 1 << endl;
//                }
//            }
//        }
//    }
//
//    string uniqueCourses[500];
//    int countCourses[500];
//    int uniqueCount = 0;
//
//    for (int i = 0; i < timeslots; i++)
//    {
//        for (int j = 0; j < rooms; j++)
//        {
//            if (arr[i][j] == "--")
//            {
//                continue;
//            } 
//
//            string course = arr[i][j];
//            bool found = false;
//
//            for (int k = 0; k < uniqueCount; k++)
//            {
//                if (uniqueCourses[k] == course)
//                {
//                    countCourses[k]++;
//                    found = true;
//                    break;
//                }
//            }
//
//            if (!found)
//            {
//                uniqueCourses[uniqueCount] = course;
//                countCourses[uniqueCount] = 1;
//                uniqueCount++;
//            }
//        }
//    }
//
//    string mostCourse;
//    int best = 0;
//
//    for (int i = 0; i < uniqueCount; i++)
//    {
//        if (countCourses[i] > best)
//        {
//            best = countCourses[i];
//            mostCourse = uniqueCourses[i];
//        }
//    }
//
//
//    cout << "Most Frequent Course: " << mostCourse << endl;
//    cout << "Total Empty Slots: " << emptycount << endl;
//
//
//	system("pause");
//	return 0;
//}