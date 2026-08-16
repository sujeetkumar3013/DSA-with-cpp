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
        if (arr[i] - minElement > maxDifference)
        {
            maxDifference = arr[i] - minElement;
        }

        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    cout << "Largest difference = " << maxDifference;

    return 0;
}