#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> b(m);

    cout << "Enter " << m << " elements: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << "Union of arrays: ";

    for (int x : a)
        cout << x << " ";

    for (int x : b)
    {
        bool found = false;

        for (int y : a)
        {
            if (x == y)
            {
                found = true;
                break;
            }
        }

        if (!found)
            cout << x << " ";
    }

    return 0;
}