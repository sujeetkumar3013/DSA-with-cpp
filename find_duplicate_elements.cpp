#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Duplicate elements: ";

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if (duplicate)
        {
            bool printed = false;

            for (int k = 0; k < i; k++)
            {
                if (arr[k] == arr[i])
                {
                    printed = true;
                    break;
                }
            }

            if (!printed)
                cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}