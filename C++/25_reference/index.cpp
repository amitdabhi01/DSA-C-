#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int b = a;

    a = 30;

    cout << a << endl;
    cout << b << endl;



    int x = 50;
    int &y = x;

    cout << x << endl;
    cout << y << endl;

    return 0;
}