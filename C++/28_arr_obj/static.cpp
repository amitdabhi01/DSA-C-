#include<iostream>
#include<string.h>

using namespace std;

class mentor{
    public:
        int id;
        char post[10];
        static int coursecode;
};

class student{
    public:
        int grid;
        char name[10];
        static int coursecode;
};

int student::coursecode = 1234;
int mentor::coursecode = 5678;

int main(){
    
    student st1, st2;

    st1.grid = 5268;
    strcpy(st1.name, "jay");

    st2.grid = 8349;
    strcpy(st2.name, "amit");


    cout << st1.grid << " " << st1.name << " " << student::coursecode << endl;
    cout << st2.grid << " " << st2.name << " " << mentor::coursecode << endl;

    return 0;
}