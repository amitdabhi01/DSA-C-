#include<iostream>

using namespace std;

int main(){

int num = 11;

for (int i=num; i<=20; i++)
{
    for (int j=i; j<=num; j++)
    {
        cout << j << " ";
    }
    
    cout << endl;
}

    return 0;
}