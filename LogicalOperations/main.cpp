#include <iostream>
using namespace std;

/*                              Логические операции                             */
/*
    1. Операторы сравнения
    < - меньше
    > - больше
    <= - меньше / равно
    >= - больше / равно

    2. Операторы равенства
    == - равно
    != - не равно

    3. Логические операторы объединения и отрицания инверсия.

    && - И
    || - ИЛИ
    != - НЕ
*/

int main()
{
    int var;
    cout << "Enter a number to check for parity: " << endl;
    cin >> var;

    if(var % 2 == 0)
    {
        cout << "Number " << var << " even!" << endl; // чётное! -> even!
    }
    else 
    {
        cout << "Number " << var << " odd!" << endl; // нечётное! -> odd!
    }
// ======================================================================
    // int a;
    // cout << "Enter the number" << endl;
    // cin >> a;

    // if(a > 5)
    // {
    //     cout << "Your number is greater than 5" << endl;
    // }
    // else if(a == 5)
    // {
    //     cout << "Your number is 5" << endl;
    // }
    // else 
    // {
    //     cout << "Your number is less than 5" << endl;
    //}
// ======================================================================
    // bool isRain = false;

    // if(isRain)
    // {
    //     cout << "It's raining, we need an umbrella!" << endl;
    // }
    // else
    // {
    //     cout << "There is no rain, no need for an umbrella!" << endl;
    // }

    return 0;
}