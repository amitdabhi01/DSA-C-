#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int ele){
        this->data = ele;
        this->next = NULL;
    }
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
        Node *newNode = new Node(ele);
        newNode->next = this->HEAD;
        this->HEAD = newNode;
        this->size++;
    }

    void addEndNode(int ele){
        Node *nweNode = new Node(ele);
        this->size++;
        if (this->HEAD == NULL)
        {
            nweNode->next = this->HEAD;
            this->HEAD = nweNode;
        }
        else{
            Node *ptr = this->HEAD;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = nweNode;
        }
    }

    void addAtPos(int pos, int ele){
        if (pos < 0 || pos > this->size)
        {
            cout << "Invalid position....!" << endl;
        }
        else{
            Node *newNode = new Node(ele);
            this->size++;
            if (this->HEAD == NULL)
            {
                newNode->next = this->HEAD;
                this->HEAD = newNode;
            }
            else{
                Node *ptr = this->HEAD;
                for (int i=0; i<pos-1; i++)
                {
                    ptr = ptr->next;
                }
                newNode->next = ptr->next;
                ptr->next = newNode;
            }            
        }
    }

    void updateNode(int pos, int ele){
        if (pos < 0 || pos > this->size)
        {
            cout << "Invalid position....!" << endl;
        }
        else{
            Node *ptr = this->HEAD;
            for (int i=0; i<size; i++)
            {
                ptr = ptr->next;
            }
            ptr->data = ele;
        }
    }

    void delStartNode(){
        Node *ptr = this->HEAD;
        this->HEAD = ptr->next;
        ptr = NULL;
        this->size--;
    }

    void delEndNode(){
        Node *ptr = this->HEAD;

        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
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
    cout << "Press 3 for add node at any position of list....!" << endl;
    cout << "Press 4 for printing of all list....!" << endl;
    cout << "Press 5 for update node at position of list....!" << endl;
    cout << "Press 6 for delete node at begining of list....!" << endl;
    cout << "Press 7 for delete node at end of list....!" << endl;

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
                cout << "Element: ";
                cin >> ele;
                list.addEndNode(ele);
            break;  

        case 3 :
                cout << "Pos: ";
                cin >> pos;
                cout << "Element: ";
                cin >> ele;
                list.addAtPos(pos, ele); 
            break;

        case 4 :
                list.printList();
            break;

        case 5 :
                cout << "Pos: ";
                cin >> pos;
                cout << "Element: ";
                cin >> ele;
                list.updateNode(pos, ele);
            break;

        case 6 :
            list.delStartNode();
            break;

        case 7 :
            list.delEndNode();
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}