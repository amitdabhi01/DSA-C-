#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main(){
    int n = 10;
    
    n = 20;

    n = 30;
    char a = 'a';
    double d = 1.43;

    Node obj;
    obj.data = 20;
    obj.next = NULL;

    int *n1 = new int(20);
    n1 = new int(200);
    n1 = new int(300);
    char *a1 = new char('a');
    float *f1 = new float(1.1);

    Node *obj1 = new Node();
    obj1->data = 20;
    obj1->next = NULL;

    return 0;
}