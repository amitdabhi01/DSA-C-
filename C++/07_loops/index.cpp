#include<iostream>
using namespace std;

int main(){


    // int i= 1;

    // while (i < 5)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    




    int i = 1;
    int num;
    cout << "Enter Number: ";
    cin >> num;

    while (i <= 10)
    {
        cout << num << " x " << i << " = " << num*i << endl;
        i++; 
    }

    return 0;
}