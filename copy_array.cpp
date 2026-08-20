#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int copy[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }

    cout << "Copied array: ";

    for (int i = 0; i < n; i++)
    {
        cout << copy[i] << " ";
    }

    cout << endl;

    return 0;
}