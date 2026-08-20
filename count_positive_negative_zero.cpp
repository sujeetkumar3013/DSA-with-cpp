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
    {
        cin >> arr[i];
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive elements = " << positive << endl;
    cout << "Negative elements = " << negative << endl;
    cout << "Zero elements = " << zero << endl;

    return 0;
}