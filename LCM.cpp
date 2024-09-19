#include <iostream>
using namespace std;

// Formula to find LCM

// LCM(a, b) = (a * b) / GCD(a, b)

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{

    int a = 0;
    int b = 0;
    cout << "Enter A :" << endl;
    cin >> a;
    cout << "Enter B :" << endl;
    cin >> b;

    long lcm = (a * b) / gcd(a, b);
    cout << "LCM of 2 numbers :" << lcm;
    return 0;
}
