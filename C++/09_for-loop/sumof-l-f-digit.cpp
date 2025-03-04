#include<iostream>

using namespace std;

int main(){

    int num = 674;

    int last_digit = num%10;

    int first_digit = 0;


    while (num > 10)
    {
        num = num/10;

        first_digit = num;

    }
    
    int sum = last_digit + first_digit;

    cout << sum << endl;


    return 0;
}