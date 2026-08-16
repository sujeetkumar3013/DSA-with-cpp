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

    int totalSum = 0;

    for (int x : arr)
    {
        totalSum += x;
    }

    int leftSum = 0;
    int equilibriumIndex = -1;

    for (int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            equilibriumIndex = i;
            break;
        }

        leftSum += arr[i];
    }

    if (equilibriumIndex != -1)
        cout << "Equilibrium index = " << equilibriumIndex;
    else
        cout << "No equilibrium index found";

    return 0;
}