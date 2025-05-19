#include<iostream> 
using namespace std;

void insertion_sort(int arr[], int size);
void print_arr(int arr[], int size);

int main(){
    
    int size;
    cout << "size: ";
    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
    cout << endl;

    print_arr(arr, size);

    insertion_sort(arr, size);

    print_arr(arr, size);
    
    return 0;
}

void insertion_sort(int arr[], int size){

    for (int i=0; i<size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && key < arr[j]) 
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void print_arr(int arr[], int size){
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}