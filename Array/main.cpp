#include <iostream>
using namespace std;

int main()
{
    // int arr[4];

    // arr[0] = 5;
    // arr[1] = 7;
    // arr[2] = 10;
    // arr[3] = 3333;

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;

    // =============================================

    // int arr[] = {1, 66, 12, 2};
    // int arr[]{1, 66, 12, 2};
    // int arr[]{};

    // cout << arr[3] << endl;

    // =============================================

    const int size = 5;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}