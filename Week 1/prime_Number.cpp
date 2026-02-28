#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter Number To Check  Prime Number Or not :";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << "is a prime number";
    }
    else
    {
        cout << n << "is not a prime number";
    }
}