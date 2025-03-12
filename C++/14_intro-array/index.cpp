#include<iostream>

using namespace std;

int main(){



int arr[5];

cout << "arr[0]: ";
cin >> arr[0];

cout << "arr[1]: ";
cin >> arr[1];

cout << "arr[2]: ";
cin >> arr[2];

cout << "arr[3]: ";
cin >> arr[3];

cout << "arr[4]: ";
cin >> arr[4];

cout << arr[2];

for (int i=0; i<5; i++)
{
    cout << arr[i] << " ";
}




string cars[4]={"Bmw", "Mercedes", "Skoda", "Volkswagan"};
cout << cars[1];







int size;
cout << "size: ";
cin >> size;

int arr[size];


for (int i=0; i<size; i++)
{
    cout << "arr[" << i << "]: ";
    cin >> arr[i];
}

for (int i=0; i<size; i++)
{
    cout << arr[i] << " ";
}




















    return 0;
}