#include<iostream>

using namespace std;

int main(){
    int i = 1;

    int fact = 1;

    while (i<=6)
    {
        fact = fact*i;

        i++;

       
    }
    
    cout << fact << endl;

    return 0;
    
}