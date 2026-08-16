#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "First repeating element = " << arr[i];
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        cout << "No repeating element";

    return 0;
}