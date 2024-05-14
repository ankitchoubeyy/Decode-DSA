#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,34,95,65,2};
    int max = arr[0];

    // finding maximum value of an array
    for(int i = 0; i < 5; i++)
    {
        if (arr[i] > max )
        {
            max = arr[i];
        }
        
    }

    cout << "Maximum value is: " << max;

    return 0;
}