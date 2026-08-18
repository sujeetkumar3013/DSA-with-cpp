#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Frequency of elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        bool alreadyCounted = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (!alreadyCounted)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }

            cout << arr[i] << " = " << count << endl;
        }
    }

    return 0;
}