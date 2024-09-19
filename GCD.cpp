#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter 2 numbers to find gcd";
    cin >> a >> b;

    int x = min(a, b);
    int gcd = 1;

    for (int i = 2; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }

    cout << "GCD of numbers is : " << gcd << endl;
    return 0;
}