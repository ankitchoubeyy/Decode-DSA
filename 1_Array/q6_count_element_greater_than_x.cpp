#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,34,95,65,2};
    int count = 0;
    int x;
    cout << "Enter x: ";
    cin >> x;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > x)
        {
            count++;
        }
    }

    cout<< count;
    
    return 0;
}