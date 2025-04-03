#include<iostream>

using namespace std;

void sum(){
    int first, second;
    cout << "Enter first num: ";
    cin >> first;
    cout << "Enter second num: ";
    cin >> second;
    cout << "Sum of " << first << " and " << second << " is = " << first+second << endl;
}

void sub(){
    int first, second;
    cout << "Enter first num: ";
    cin >> first;
    cout << "Enter second num: ";
    cin >> second;
    cout << "Substraction of " << first << " and " << second << " is = " << first-second << endl;
}

void multi(){
    int first, second;
    cout << "Enter first num: ";
    cin >> first;
    cout << "Enter second num: ";
    cin >> second;
    cout << "Multiplication of " << first << " and " << second << " is = " << first*second << endl;
}

void divi(){
    int first, second;
    cout << "Enter first num: ";
    cin >> first;
    cout << "Enter second num: ";
    cin >> second;
    cout << "Dividation of " << first << " and " << second << " is = " << first/second << endl;
}

void modul(){
    int first, second;
    cout << "Enter first num: ";
    cin >> first;
    cout << "Enter second num: ";
    cin >> second;
    cout << "Modulas of " << first << " and " << second << "is = " << first%second << endl;
}

int main(){

    int choice, first, second; 

    while (choice != 0)

    {
        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for Exit " << endl << endl;
        cout << "Enter your choice: "; 
        cin >> choice ;
        cout << endl;

        switch (choice)
        {
        case 1:
            sum();
            break;
    
        case 2:
            sub();
            break;
    
        case 3:
            multi();
            break;
    
        case 4:
            divi();
            break;
    
        case 5:
            modul();
            break;
        
        default:
            break;
        }
        cout << endl;
    }
    
    return 0;
}