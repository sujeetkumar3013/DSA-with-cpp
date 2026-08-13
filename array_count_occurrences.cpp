#include <iostream>
using namespace std;

int main()
{
    int n, search, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to count: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }

    cout << "Element occurs " << count << " times";

    return 0;
}