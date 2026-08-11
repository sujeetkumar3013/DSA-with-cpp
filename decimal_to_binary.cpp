#include <iostream>
using namespace std;

int main()
{
    int n, binary[32], i = 0;

    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary = ";

    for (i = i - 1; i >= 0; i--)
    {
        cout << binary[i];
    }

    return 0;
}