#include<iostream>

using namespace std;

void square(int n){
    cout << n*n << endl;
}

void cube(int *ptr){
    cout << ptr << " " << *ptr << endl;
}

void sum(int &n){
    cout << n+n << endl;
}

int main(){

    int num = 30;

    int *ptr = &num;

    int &ref = num;

    square(30); // pasing by value

    square(num); // passing by variable

    cube(ptr); // passing by pointer

    cube(&num); // passing by address
    
    sum(ref); // passing by reference

    return 0;
}