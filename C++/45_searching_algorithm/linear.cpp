#include<iostream>
using namespace std;

int linear_serach(int arr[], int serach, int size){

    int index = -1;

    for (int i=0; i<size; i++)
    {
        if (arr[i] == serach)
        {
            index = i;
            return index;
        }
    }
    
    return index;
}

int main(){

    int size, serach;
    cout << "size: ";
    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "search: ";
    cin >> serach;

    int find = linear_serach(arr, serach, size);

    if (find > 0)
    {
        cout << "Element is found at index " << find << endl;
    }
    else{
        cout << "Element is not found.....!" << endl;
    }
    
    return 0;
}