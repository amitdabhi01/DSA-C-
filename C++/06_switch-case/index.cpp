#include<iostream>
using namespace std;


int main(){

    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    char grade;

    if(marks > 90){
        cout << "Your grade is A" << endl;
        grade='A';
    }
    else if(marks > 70){
        cout << "Your grade is B" << endl;
        grade='B';
    }
    else if(marks > 50){
        cout << "Your grade is C" << endl;
        grade='C';
    }
    else if(marks > 40){
        cout << "Your grade is D" << endl;
        grade='D';
    }
    else if(marks < 23){
        cout << "You failed in exam" << endl;
        grade='F';
    }
    else{
        cout << "Please check your input";
    }


    switch (grade)
    {
    case 'A': cout << "Excelent work....!" << endl;
        break;
    case 'B': cout << "Good work....!" << endl;
        break;
    case 'C': cout << "Work to hard....!" << endl;
        break;
    case 'D': cout << "Need to word harder and hard....!" << endl;
        break;
    case 'F': cout << "Keep work hard and don't give up....!" << endl;
        break;
    default: cout << "";
    }


    return 0;
}