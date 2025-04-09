#include<iostream>
#include<string.h>

using namespace std;

class student{
    public:
        int grid;
        char name[100];
        int age;
        char course[100];
        float percentage;
};


int main(){

    student student1, student2, student3, student4;


    student1.grid = 123;
    strcpy(student1.name, "jay");
    student1.age = 21;
    strcpy(student1.course, "c++");
    student1.percentage = 88.6;


    student2.grid = 456;
    strcpy(student2.name, "krunal");
    student2.age = 22;
    strcpy(student2.course, "css");
    student2.percentage = 90.1;


    student3.grid = 789;
    strcpy(student3.name, "yashvi");
    student3.age = 21;
    strcpy(student3.course, "javascript");
    student3.percentage = 80.4;


    student4.grid = 012;
    strcpy(student4.name, "krisha");
    student4.age = 22;
    strcpy(student4.course, "react");
    student4.percentage = 92.6;

    cout << "------------------------------" << endl;





    cout << "grid: " << student1.grid << endl;
    cout << "name: " << student1.name << endl;
    cout << "age: " << student1.age << endl;
    cout << "course: " << student1.course << endl;
    cout << "percentage: " << student1.percentage << endl;

    cout << "------------------------------" << endl;


    cout << "grid: " << student2.grid << endl;
    cout << "name: " << student2.name << endl;
    cout << "age: " << student2.age << endl;
    cout << "course: " << student2.course << endl;
    cout << "percentage: " << student2.percentage << endl;

    cout << "------------------------------" << endl;


    cout << "grid: " << student3.grid << endl;
    cout << "name: " << student3.name << endl;
    cout << "age: " << student3.age << endl;
    cout << "course: " << student3.course << endl;
    cout << "percentage: " << student3.percentage << endl;

    cout << "------------------------------" << endl;


    cout << "grid: " << student4.grid << endl;
    cout << "name: " << student4.name << endl;
    cout << "age: " << student4.age << endl;
    cout << "course: " << student4.course << endl;
    cout << "percentage: " << student4.percentage << endl;

    cout << "------------------------------" << endl;



    return 0;
}