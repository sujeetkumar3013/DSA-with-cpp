#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool prime = true;
    for (int i = 2; i < n;i++)
    {
        if(n % i == 0)
        {

        
        prime = false;
        break;
    }

if(prime)
cout << "prime Number";
else
cout << "Not Prime Number";
return 0;
    }
}