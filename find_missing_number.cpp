#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements from 1 to " << n + 1 << ": ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int total = (n + 1) * (n + 2) / 2;

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    int missing = total - sum;

    cout << "Missing number = " << missing << endl;

    return 0;
}