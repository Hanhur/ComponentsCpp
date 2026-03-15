#include <iostream>
using namespace std;

int main()
{
    int arr[]{5, 33, 545, 111, 326};

    // cout << sizeof(arr) / sizeof(int) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}