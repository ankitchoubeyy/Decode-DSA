#include <iostream>
using namespace std;

int main()
{
    // predict out the duplicate value of an array
    int arr[5] = {82, 34, 32, 56, 32};
    bool flag = false;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i +1; j < 5; j++)
        {
            if (arr[j] == arr[i])
            {
                flag = true;
                cout << arr[i] << endl;
            }
        }
    }

    cout << flag;

    return 0;
}