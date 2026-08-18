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

    bool palindrome = true;

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        cout << "Array is palindrome" << endl;
    else
        cout << "Array is not palindrome" << endl;

    return 0;
}