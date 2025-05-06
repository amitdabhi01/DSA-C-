#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class LinkedList{
    public:
        Node *HEAD;
        int size;

    LinkedList(){
        this->HEAD = NULL;
        this->size = 0;
    }

    void addStartNode(int ele){
        Node *newNode = new Node;
        newNode->data = ele;
        newNode->next = this->HEAD;
        this->HEAD = newNode;
    }

    void printList(){
        Node *ptr = this->HEAD;
        while (ptr!=NULL)
        {
            cout << " -> " << ptr->data;
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main(){

    LinkedList list;

    cout << "Press 1 for add node at begining of list....!" << endl;
    cout << "Press 2 for add node at end of list....!" << endl;
    cout << "Press 3 for add node at ant position of list....!" << endl;

    int choice, ele, pos;

    while (choice!=0)
    {
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1 :
                cout << "Element: ";
                cin >> ele;
                list.addStartNode(ele);
            break;

        case 2 :
            break;  

        case 3 :
            break;

        case 4 :
                list.printList();
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}