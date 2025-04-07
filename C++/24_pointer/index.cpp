#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int b = a;
    int c = b;
    int d = c;


    cout << &d << endl;

    cout << &c << endl;

    cout << &b << endl;

    cout << &a << endl;


    return 0;
}