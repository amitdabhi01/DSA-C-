#include<iostream>
#include<string.h>

using namespace std;

class Engine{
    public:
        char eng1[100] = "V8 Engine";
        char eng2[100] = "V12 Engine";
        char eng3[100] = "I6 Engine";
};


class Color{
    public:
        char col1[100] = "Black Color";
        char col2[100] = "White Color";
        char col3[100] = "Blue Color";
};


class Vehical : public Engine, public Color{
    public:
        void spf(){
            cout << "Vehical has " << this->eng1 << " With " << this->col1;
        }

};

int main(){

    Vehical car1;

    car1.spf();

    return 0;
}