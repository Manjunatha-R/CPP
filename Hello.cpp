#include <iostream>

#define SIZE 10;

void func1();
void func2();
// #pragma startup func1
// #pragma exit func2

// void __attribute__((constructor)) func1();
// void __attribute__((destructor)) func2();

int main()
{

    int a;
    float A;
    std::cout << a << std::endl;
    std::cout << A << std::endl;
    std::cout << SIZE;
    std::cout << "\n";
    // for (int i = 0; i < SIZE; i++) {
    //     std::cout << i << "\n";
    // }
    std::cout << "Hello C++ world" << std::endl;
    return 0;
}

void func1()
{
    std::cout << "Inside func1()\n";
}

void func2()
{
    std::cout << "Inside func2()\n";
}