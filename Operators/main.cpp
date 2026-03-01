#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Vvedite 3 chisla:" << endl;
    cin >> a >> b >> c;

    cout << "Summa 3 chisel = " << a + b + c << endl;

    cout << "Proizvedenie 3 chisel = " << a * b * c << endl;

    cout << "Sredneje arefmetik 3 chisel = " << (double)(a + b + c) / 3 << endl;

    return 0;
}