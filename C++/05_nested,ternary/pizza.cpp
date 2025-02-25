#include<iostream>
using namespace std;

int main(){

    cout << "1 for pizaa" << endl;
    cout << "2 for burger" << endl;
    cout << "3 for sandwich" << endl;
    cout << "4 for pasta" << endl;
    cout << "--------------------" << endl;

    int choose;
    int type;
    cout << "please choose numebr for order: ";
    cin >> choose;
    cout << "--------------------" << endl;

    if(choose == 1){
        cout << "1 for margrita pizza" << endl;
        cout << "2 for maxican pizza" << endl;
        cout << "3 for cheese brust pizza" << endl;
        cout << "--------------------" << endl;
        cout << "please say which type of pizza: ";
        cin >> type;
        cout << "--------------------" << endl;

        if(type==1){
            cout << "you ordered margrita pizza"<< endl;
        }
        else if(type==2){
            cout << "you orderd maxican pizza" << endl;
        }
        else if(type==3){
            cout << "you ordered cheese brust pizaa" << endl;
        }
        else{
            cout << "this type of pizza is not avialable";
        }
        cout << "--------------------" << endl;
    }



    else if(choose == 2){
        cout << "1 for veggie burger" << endl;
        cout << "2 for cheeseburger burger" << endl;
        cout << "3 for turkey burger" << endl;
        cout << "4 for classic burger" << endl;
        cout << "--------------------" << endl;
        cout << "please say which type of burger: ";
        cin >> type;
        cout << "--------------------" << endl;

        if(type==1){
            cout << "you ordered veggie burger"<< endl;
        }
        else if(type==2){
            cout << "you orderd cheeseburger burger" << endl;
        }
        else if(type==3){
            cout << "you ordered turkey burger" << endl;
        }
        else if(type==4){
            cout << "you ordred classic burger" << endl;
        }
        else{
            cout << "this type of burger is not avialable";
        }
        cout << "--------------------" << endl;
    }


    else if(choose == 3){
        cout << "1 for Cuban sandwich" << endl;
        cout << "2 for Elvis sandwich" << endl;
        cout << "3 Panuozzo sandwich" << endl;
        cout << "4 for Schnitzel sandwich" << endl;
        cout << "--------------------" << endl;
        cout << "please say which type of sandwich: ";
        cin >> type;
        cout << "--------------------" << endl;

        if(type==1){
            cout << "you ordered Cuban sandwich"<< endl;
        }
        else if(type==2){
            cout << "you orderd Elvis sandwich" << endl;
        }
        else if(type==3){
            cout << "you ordered Panuozzo sandwich" << endl;
        }
        else if(type==4){
            cout << "you ordred Schnitzel sandwich" << endl;
        }
        else{
            cout << "this type of sandwich is not avialable";
        }
        cout << "--------------------" << endl;
    }


    else if(choose == 4){
        cout << "1 for Spaghetti Bolognaise pasta" << endl;
        cout << "2 for Lasagne pasta" << endl;
        cout << "3 Fettuccine Alfredo pasta" << endl;
        cout << "--------------------" << endl;
        cout << "please say which type of pasta: ";
        cin >> type;
        cout << "--------------------" << endl;

        if(type==1){
            cout << "you ordered Spaghetti Bolognaise pasta"<< endl;
        }
        else if(type==2){
            cout << "you orderd Lasagne pasta" << endl;
        }
        else if(type==3){
            cout << "you ordered Fettuccine Alfredo pasta" << endl;
        }
        else{
            cout << "this type of pasta is not avialable";
        }
        cout << "--------------------" << endl;
    }


    else{
        cout << "please choose valid option";
    }





    return 0;
}