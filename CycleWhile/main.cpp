#include <iostream>
using namespace std;

int main()
{
    int symbolCount, lineType, index = 0;
    char symbol;

    cout << "Enter the number of characters in a line" << endl;
    cin >> symbolCount;

    cout << "Enter the symbol" << endl;
    cin >> symbol;

    cout << "Select line type:" << endl
        << "1 - vertical line" << endl
        << "2 - horizontal line" << endl;
    cin >> lineType;

    if(lineType != 1 && lineType != 2)
    {
        cout << "Incorrect line type!" << endl;
        return 0;
    }

    while (index < symbolCount)
    {
        if(lineType == 1)
        {
            cout << symbol << endl;
        }

        if(lineType == 2)
        {
            cout << symbol;
        }

        index++;
    }
    
    cout << endl << endl;

    return 0;
}