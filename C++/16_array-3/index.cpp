#include<iostream>
using namespace std;

int main(){


    int nums[4] = {33, 12, 65, 78};

    int size = sizeof(nums)/sizeof(nums[0]);


    int sum = 0;

    for (int i=0; i<size; i++)
    {
        sum = sum + nums[i];
    }


    int avg = sum/size;


    cout << "avg: " << avg << endl;

    return 0;
}