#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cout << "Enter the n: ";
    cin >> n;
    int array[n];

    // Taking inputs from user
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Sum of array
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    cout << "Sum of Array: " << sum;

    return 0;
}