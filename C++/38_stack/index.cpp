#include<iostream>
using namespace std;

class Stack{
    public:
        int top;
        int size;
        int capacity;
        int *arr;
    
    Stack(int capacity){
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->top = -1;
        this->size = 0;
    }
    

    void push(int ele){
        if (this->size > this->capacity-1)
        {
            cout << "stack is Full..." << endl;
        }
        this->top++;
        arr[this->top] = ele;
        this->size++;

    }

    void pop(){
        if (this->top < 0)
        {
            cout << "stack is Empty...!" << endl;
            return;
        }
        this->top--;
        this->size--;
        
    }

    void peak(){
        cout << "|" << arr[this->top] << "|" << endl;
    }

    void isEmpty(){
        if (this->top < 0)
        {
            cout << "isEmpty: True" << endl;
        }
        else{
            cout << "isEmpty: False" << endl;
        }
        
    }

    void isFull(){
        if (this->size > capacity-1)
        {
            cout << "isFull: True" << endl;
        }
        else{
            cout << "isFull: flase" << endl;
        }
        
    }

    void size1(){
        cout << "size: " << this->size << endl;
    }

    void display(){
        for (int i=size-1; i>=0; i--)
        {
            cout << "|" << arr[i] << "|" << endl;
        } 
        
    }
};

int main(){

    int choice, ele, capacity;

    cout << "Stack size: ";
    cin >> capacity;

    Stack st(capacity);

    while (choice != 0)
    {
        cout << "press 1 for push in stack" << endl;
        cout << "press 2 for pop in stack" << endl;
        cout << "press 3 for peak in stack" << endl;
        cout << "press 4 for isEmpty in stack" << endl;
        cout << "press 5 for isFull in stack" << endl;
        cout << "press 6 for size in stack" << endl;
        cout << "press 7 for display in stack" << endl;

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Element: ";
            cin >> ele;
            st.push(ele);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            st.peak();
            break;

        case 4:
            st.isEmpty();
            break;

        case 5:
            st.isFull();
            break;

        case 6:
            st.size1();
            break;
        
        case 7:
            st.display();
            break;
        
        default:
            break;
        }
    }

    return 0;
}