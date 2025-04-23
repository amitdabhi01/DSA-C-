#include<iostream>
#include<string.h>

using namespace std;

class Animal{
    public:
        void eat(){
            cout << "can eat " << endl;
        }
    
        void hunt(){
            cout << "can hunt " << endl;
        }
};

class vag : public Animal{
    public:
        char food[100] = "grass";
};

class non_veg : public Animal{
    public:
        char food[100] = "meat";
};

int main(){

    Animal cow, tiger;

    cow.eat();
    tiger.hunt();

    return 0;
}