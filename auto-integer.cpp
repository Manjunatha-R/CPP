#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{

    // auto a; this line will give error

    // because 'a' is not initialized at

    // the time of declaration

    // a=33;

    // see here x ,y,ptr are

    // initialized at the time of

    // declaration hence there is

    // no error in them

    auto x = 4;

    auto y = 3.37;

    auto ptr = &x;

    cout << typeid(x).name() << endl;

    cout << typeid(y).name() << endl;

    cout << typeid(ptr).name() << endl;

    return 0;
}