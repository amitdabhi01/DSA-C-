#include<iostream>
#include<string.h>

using namespace std;


int x = 100;

int main(){

    int x = 30;

    cout << x << endl;
    cout << ::x << endl;

    return 0;
}