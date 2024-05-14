#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,34,95,65,2};
    int max = arr[0];
    int sMax = arr[0];

    // finding maximum value of an array
    for(int i = 0; i < 5; i++)
    {
        if (arr[i] > max )
        {
            max = arr[i];
        }
        
    }
    // finding second maximum value of an array
     for(int i = 0; i < 5; i++)
    {
        if (arr[i] != sMax && sMax < arr[i] )
        {
            sMax = arr[i];
        }
        
    }

    cout << "Maximum value is: " << max;
    cout << "Second maximum value is: " << sMax;
    return 0;
}