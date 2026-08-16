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

    cout << "Leaders: ";

    for (int i = 0; i < n; i++)
    {
        bool leader = true;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                leader = false;
                break;
            }
        }

        if (leader)
            cout << arr[i] << " ";
    }

    return 0;
}