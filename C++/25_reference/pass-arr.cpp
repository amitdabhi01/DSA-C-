#include<iostream>

using namespace std;

void addition(int a[]){
    int sum = 0;
    for (int i=0; i<4; i++)
    {
        sum = sum + a[i];
    }
    
}

void change(const int a){
    cout << a << endl;
}

int main(){

    int arr[4] = {1, 2, 3, 4};

    addition(arr);

    int a = 200;

    change(a);

    return 0;
}