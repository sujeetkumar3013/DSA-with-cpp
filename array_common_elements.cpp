#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter " << m << " elements: ";

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << "Common elements: ";

    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}