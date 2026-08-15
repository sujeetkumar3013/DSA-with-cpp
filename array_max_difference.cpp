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
    {
        cin >> arr[i];
    }

    int minElement = arr[0];
    int maxDifference = 0;

    for (int i = 1; i < n; i++)
    {
        maxDifference = max(maxDifference, arr[i] - minElement);
        minElement = min(minElement, arr[i]);
    }

    cout << "Maximum difference = " << maxDifference;

    return 0;
}