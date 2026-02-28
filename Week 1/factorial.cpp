#include <iostream>
using namespace std;
int main()
{
    int n, fact=1, i;
    cout << "Enter Factorial  Number:";
    cin >> n;
    if (n < 0)
    {
        cout << "The Number is negative so factorial Cannot be found";
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    cout << "The Factorial  of Given Number :" << fact;
}