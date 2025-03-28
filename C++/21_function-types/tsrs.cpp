#include<iostream>

using namespace std;

int sum(int num){

    int sum = 0;

    for (int i=1; i<=num; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}

int main(){

    int num = 10;

    int avg = sum(num)/num;

    cout << "AVG = " << avg;

    return 0;
}