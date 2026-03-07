#include <iostream>
using namespace std;

int main()
{
    int a, b, selection;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;

    cout << "Select a mathematical operation" << endl << 
        "1. Addition" << endl << 
        "2. Subtraction" << endl << 
        "3. Multiplication" << endl << 
        "4. Division" << endl;

    cin >> selection;

    switch(selection)
    {
        case 1:
            cout << "The result of addition" << a + b << endl;
            break;
        case 2:
            cout << "The result of subtraction" << a - b << endl;
            break;
        case 3:
            cout << "The result of multiplication" << a * b << endl;
            break;
        case 4:
            cout << "The result of division" << (float) a / b << endl;
            break;
        default:
            cout << "Error! Item menb is missing!" << endl;
            break;
    }

    return 0;
}