#include<iostream>
using namespace std;

void print_arr(int arr[], int n){
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

     int n = 5;

    int arr[5] = {64, 25, 12, 22, 11};

    for (int i=0; i<n; i++)
    {
        int min_index = i;

        for (int j=i+1; j<n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            
        }

        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        
    }

    print_arr(arr, n);

    return 0;
}