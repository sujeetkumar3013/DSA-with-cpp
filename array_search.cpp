#include <iostream>
using namespace std;

int main()
{
    int n, search;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found";
    }

    return 0;
}