#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(b == 0){
        return a;
    }

    return gcd(b, a%b);
}

int main(){

    int a, b;
    cout<<"Enter A ";
    cin>>a;
    cout<<"Enter B ";
    cin>> b;

    double result = gcd(a, b);

    cout <<"GCD of 2 numbers is :"<< result << endl;
    return 0;
}