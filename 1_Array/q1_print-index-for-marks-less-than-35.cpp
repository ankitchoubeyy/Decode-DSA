#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    // Taking input at run time
    cout << "Enter 5 marks of student: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    // printing indexes of marks having less than 35
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            cout << "Roll no of students marks having less than 35 marks: " << marks[i] << " ";
        }
    }

    return 0;
}