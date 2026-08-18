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
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;

    int b[m];

    cout << "Enter " << m << " elements: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << "Intersection: ";

    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                found = true;
                break;
            }
        }

        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {
            if (a[k] == a[i])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (found && !alreadyPrinted)
            cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}