#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {12, 56, 32, 67, 59}; // Declaration and Initialization
    cout << arr[4] << endl
         << arr[2] << endl; // printing array elements uisng index

    // printing array using loop
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Taking input at run time
    int arr1[5];
    cout << endl
         << "Enter the elements of new array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // printing array using loop
    cout << "Printing new array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}