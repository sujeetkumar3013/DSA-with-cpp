#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> target;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    cout << "Frequency of " << target << " = " << count;

    return 0;
}