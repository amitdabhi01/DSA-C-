#include<iostream>

using namespace std;

int main(){
    int i = 1345;

    int sum = 0;


    while (i>0)
    {
       i = i/10;
        sum++;
    }
    cout << sum << endl;

    return 0;

}