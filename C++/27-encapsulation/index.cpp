#include<iostream>
#include<string.h>
using namespace std;


class user{
    private:
        int no;
    public:
        int roll;
        user shownum(int no){
            cout << "this is public " << endl;
            this->no = no;
        }

        user getnum(){
            cout << this->no << endl;
        }

};



int main(){


    user user1, user2;

    user1.shownum(100);
    user2.shownum(200);



    user1.getnum();
    user2.getnum();


    return 0;
}