#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}