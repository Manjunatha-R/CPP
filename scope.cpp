#include <iostream>

extern int x;
int y = 10;
int main()
{

    std::cout << "printing x :" << x; // 10
    {
        int y = 5;
        std::cout << "printing y :" << y; // 5
    }
}

int x = 10;