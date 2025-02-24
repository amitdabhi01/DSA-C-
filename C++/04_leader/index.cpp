#include<iostream>

using namespace std;

int main(){


    // int sensor;
    // cout << "press 1 for open the door" << endl;
    // cout << "press 0 for close the door" << endl;
    // cout << "choose: ";
    // cin >> sensor;

    // if(sensor == 1){
    //     cout << "door is open";
    // }
    // else if(sensor == 0){
    //     cout << "door is open";
    // }










    // int a = 20;
    // int b = 40;

    // if(a > b){
    //     cout << "a is big..." << endl;
    // }
    // else if(b > a){
    //     cout << "b is big..." << endl;
    // }
    // else{
    //     cout << "a and b are equal" << endl;
    // }









    cout << "Press 1 for BMW" << endl;
    cout << "Press 2 for MERCEDES" << endl;
    cout << "Press 3 for AUDI" << endl;
    cout << "Press 4 for WOLKSWAGN" << endl;
    cout << "Press 5 for SKODA" << endl;
    cout << "Press 6 for HYUNDAI" << endl;
    cout << "-------------------------------" << endl;


    int choose;

    cout << "Choose number: ";
    cin >> choose;
    cout << "-------------------------------" << endl;

    if(choose == 1){
        cout << "you choose BMW" << endl;
    }
    else if(choose == 2){
        cout << "you choose MERCEDES" << endl;
    }
    else if(choose == 3){
        cout << "you choose AUDI" << endl;
    }
    else if(choose == 4){
        cout << "you choose WOLKSWAGN" << endl;
    }
    else if(choose == 5){
        cout << "you choose SKODA" << endl;
    }
    else if(choose == 6){ 
        cout << "you choose HYUNDAI" << endl;
    }
    else{
        cout << "pleas choose valid number" << endl;
    }

    cout << "-------------------------------" << endl;
    

    

    return 0;
}