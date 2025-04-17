#include<iostream>
#include<string.h>

using namespace std;

class cars{
    public:
        char name[100];
        char model[100];
        static char type1[100];
        static char type2[100];

        static getmodel(){
            cout << type1 << endl;
            cout << type2 << endl;
        }
};

char cars::type1[100] = "SUV";
char cars::type2[100] = "Sedan";

int main(){

    cars car1, car2, car3;

    strcpy(car1.name, "Mahindra");
    strcpy(car1.model, "XUV 700");

    strcpy(car2.name, "Tata");
    strcpy(car2.model, "Safari");

    strcpy(car3.name, "Hyundai");
    strcpy(car3.model, "Verna");


    cars::getmodel();


    // cout << car1.name << " " << car1.model << " " << cars::type1 << endl;
    // cout << car2.name << " " << car2.model << " " << cars::type1 << endl;
    // cout << car3.name << " " << car3.model << " " << cars::type2 << endl;

    return 0;
}