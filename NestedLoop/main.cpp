#include <iostream>
using namespace std;

int main()
{
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "The 1st cycle for iteration has worked. " << i << endl;

    //     for(int j = 0; j < 5; j++)
    //     {
    //         cout << "\tThe 2st cycle for iteration has worked. " << j << endl;
    //     }
    // }

    int heigth, width;

    cout << "Enter the height of the rectangle" << endl;
    cin >> heigth;

    cout << "Enter the width of the rectangle" << endl;
    cin >> width;

    for (int j = 0; j < heigth; j++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}