#include <iostream>
using namespace std;

int main()
{
    int n, original, remainder, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        remainder = n % 10;

        int fact = 1;
        for (int i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
    {
        cout << "Strong Number";
    }
    else
    {
        cout << "Not a Strong Number";
    }

    return 0;
}