#include<iostream>
using namespace std;


int main(){

int size;
cout << "Enter size: ";
cin >> size;


int A[size], B[size], C[size];


for (int i=0; i<size; i++)
{
    cout << "A[" << i << "]: ";
    cin >> A[i];
}

cout << endl << endl;


for (int i=0; i<size; i++)
{
    cout << "B[" << i << "]: ";
    cin >> B[i];
}

cout << endl << endl ;


for (int i=0; i<size; i++)
{
    C[i] = A[i] + B[i];
    cout << C[i] << " ";
}

    return 0;
}