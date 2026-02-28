#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter any 3 Values:";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is Big Number";
    }
    else if (b > a && b > c)
    {
        cout << b << " is Big Number";
    }
    else if (c > a && c > b)
    {
        cout << c << " is Big Number";
    }
}
