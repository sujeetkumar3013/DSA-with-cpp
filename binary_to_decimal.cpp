#include <iostream>
using namespace std;

int main()
{
    int binary, decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    cout << "Decimal = " << decimal;

    return 0;
}