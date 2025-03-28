#include<iostream>

using namespace std;


void addition(int num, int sum){
    for (int i=1; i<=5; i++)
    {
        sum = sum +i; //0+1=1 1+2=3 3+3=6 6+4=10 10+5=15
    }
    cout << sum;
}

int main(){

    addition(1, 0);

    return 0;
}