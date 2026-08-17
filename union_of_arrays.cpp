#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int b[m];

    cout << "Enter " << m << " elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << "Union of arrays: ";

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
            cout << a[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
                break;
            }
        }

        for (int j = 0; j < i; j++)
        {
            if (b[i] == b[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
            cout << b[i] << " ";
    }

    cout << endl;

    return 0;
}