#include<iostream>
using namespace std;

int main()
{
    int len;
    int myArr[] = {12,34,56,44,76,78};

    // using sizeof() operator
    cout << sizeof(myArr) << endl;
    
    len = sizeof(myArr)/sizeof(myArr[0]);

    cout << "Length of the array: " << len;

    return 0;
}