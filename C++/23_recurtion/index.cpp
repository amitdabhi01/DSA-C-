#include<iostream>

using namespace std;

int first(int n){
    return n*n;
}

int cube(int n){
    return n*n;
}

int main(){

    int num = 4;

    cout << "power of " << num << " is " << first(num) << endl;
    cout << "cube: "  << cube(8);
}