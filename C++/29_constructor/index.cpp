#include<iostream>
#include<string.h>

using namespace std;


class Animal{
    public:
        char name[100];
        int age;
        char type[100];

    Animal(){
        strcpy(this->name, "-");
        this->age = 20;
        strcpy(this->type, "Dog");
        cout << "Welcome.........!" << endl;
    }   
    
    Animal(char n[]){
        strcpy(this->type, n);
    }

};

int main(){
    
    Animal dog, tiger("tiger"), whale("whale"), tuphy;

    cout << dog.type << endl;
    cout << tiger.type << endl;
    cout << whale.type << endl;
    cout << tuphy.type << endl;


    return 0;
}