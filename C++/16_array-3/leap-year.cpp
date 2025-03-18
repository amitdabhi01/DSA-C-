#include<iostream>
using namespace std;

int main(){

int start_year, end_year;

int size = 0;

cout << "Enter start-year: ";
cin >> start_year;
cout << "Enter end-year: ";
cin >> end_year;

int arry[50];

for (int i=start_year; i<end_year; i++)
{
    if (i%4==0)
    {
        arry[size] = i;
        size++;
    }
    
}

cout << "Leap Year[" << size << "] = [";


for (int j=0; j<size; j++)
{
    cout << arry[j] << " ";
}

cout << "]";


    return 0;
}