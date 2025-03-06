#include<iostream>

using namespace std;

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    int count = 0;


    for (int i=2; i<num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }

    if (count==0)
    {
        cout << num << " is prime number..!" << endl;
    }
    else{
        cout << num << " is not prime number...!" << endl;
    }
    
    










    return 0;
}