#include<iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int search){ 

    if (low > high)
    {
        return -1;
    }


    int mid = (low+high)/2;

    if (arr[mid] == search)
    {
        return mid;
    }
    else if (arr[mid] > search)
    {
        return binary_search(arr, low, mid, search);
    }
    else{
        return binary_search(arr, mid+1, high, search);
    }

    return -1;
    
}

int main(){

    int size, search;
    cout << "size: ";
    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "search: ";
    cin >> search;

    int find = binary_search(arr, 0, size-1, search);

    if (find > 0)
    {
        cout << "Element is found at index " << find << endl;
    }
    else{
        cout << "Element is not found.....!" << endl;
    }
    
    return 0;
}