#include<iostream>

using namespace std;


void factorial(){

    int num = 5;

    int factorial = 1;
    
    for (int i=1; i<=num; i++)
    {
        factorial *= i;
    }
    
    cout << factorial;
}


void factor(){
    int num = 5;

    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
        {
        cout << i << " ";
        }
    }
}


void table(){
    int num = 5;

    for (int i=1; i<=10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}



int main(){

factorial();
cout << endl << "--------------------------------------" << endl;


factor();
cout << endl << "--------------------------------------" << endl;


table();
cout << endl << "--------------------------------------" << endl;


    return 0;
}