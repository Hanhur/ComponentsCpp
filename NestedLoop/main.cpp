#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "The 1st cycle for iteration has worked. " << i << endl;

        for(int j = 0; j < 5; j++)
        {
            cout << "\tThe 2st cycle for iteration has worked. " << j << endl;
        }
    }
    return 0;
}