#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements (1 to " << n + 1 << "): ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int expectedSum = (n + 1) * (n + 2) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number = " << missing;

    return 0;
}