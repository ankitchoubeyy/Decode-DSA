#include <iostream>
using namespace std;

int main()
{
    // find the element X in the array take array and X as input
    int x;
    cout << "Enter x to be searched: ";
    cin >> x;

    int myArr[5] = {18, 56, 78, 54, 90};


    // Method 1
    // for (int i = 0; i < 5; i++)
    // {
    //     if (myArr[i] == x)
    //     {
    //         cout << "Element found at: " << i << " ";

    //     }
            
    // }

    // Method 2
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if(myArr[i] == x)
        {
            flag = true;
        }
    }
    if(flag == true) cout << "Present";
    else cout << "Not present";
    
    return 0;
}