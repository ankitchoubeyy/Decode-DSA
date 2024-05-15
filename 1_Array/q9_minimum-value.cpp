#include <iostream>
using namespace std;

int main()
{
    // Find out the minimum value of an array
    int arr[5] = {82, 34, 32, 56, 43};
    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "Minimum value of an array is: " << min;

    return 0;
}