#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    if( a > b){
        if(a > c){
            cout << "a is big" << endl;
        }
        else{
            cout << "c is big" << endl;
        }
    }
    else{
        if(b > c){
            cout << "b is big" << endl;
        }
        else{
            cout << "c is big" << endl;
        }
    }

    return 0;
}