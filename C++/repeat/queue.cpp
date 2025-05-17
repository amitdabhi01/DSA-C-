#include<iostream>
using namespace std;


class Queue{

    public:
    int *arr;
    int capacity;
    int size;
    int front;
    int rear;

    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[this->capacity];
        this->size = 0;
        this->front = -1;
        this->rear= -1;

    };



   void enque(int ele){

        if(this->rear >= capacity-1){
            cout << "Queue is Full...!" << endl;
        }

         else if(this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->size++;
            arr[this->rear] = ele;
        }
        else {
            this->rear++;
            this->size++;
            arr[this->rear] = ele;
        }
   };

   void deque(){
        if(this->size <= 0)
        {
            cout << "queue is empty...!" << endl;
        }
        else if(this->front == this->rear){
            this->front = -1;
            this->rear = -1;
            this->size--;
        }
        else{
            this->front++;
            this->size--;
        }
   };

   void front1(){
        if(this->size <= 0)
        {
            cout << "queue is emplty...!" << endl;
        }
        else
        {
                    
            cout << "----" << endl;
                    cout << arr[this->front] <<endl;
            cout << "----" << endl;
        }
   }

   void rear1(){
    if(this->size <= 0)
            {
                cout << "queue is emplty...!" << endl;
            }
            else
            {
                        
                cout << "----" << endl;
                        cout << arr[this->rear] <<endl;
                cout << "----" << endl;
            }
   }

   void isfull(){
        if(this->rear >= this->capacity-1){
            cout << "Queue is  Full" << endl;
        }
        else{
            cout << "Queue is not full" << endl;
        }
        
   };

   void isempty(){
        if(this->rear == -1 && this->front == -1){
            cout << "Queue is Empty...!" << endl;
        }
        else{
            cout << "Quue is not Emplty...!" << endl;
        }
   };

   void size1(){
        cout << size << endl;
   };

   void display(){

    cout << "------------------" << endl;
    for(int i = this->front; i<=this->rear; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "------------------" << endl;
   };

};

int main(){

    Queue one(5);

    int choice, ele;


    while (choice != 0)
    {

        cout << endl << "1 for Enque..!" << endl;
        cout << "2 for deque..!" << endl;
        cout << "3 for front..!" << endl;
        cout << "4 for rear..!" << endl;
        cout << "5 for isfull..!" << endl;
        cout << "6 for isEmpty..!" << endl;
        cout << "7 for size..!" << endl;
        cout << "8 for display.!" << endl;
        cout << "choice:";
        cin >> choice;

        cout << endl;


        switch (choice)
        {
        case 1:
                cout << "ele: ";
                cin >> ele;
                one.enque(ele);
            break;
        
        case 2:
                one.deque();
                break;
        case 3:
                one.front1();
                break;
        case 4:
                one.rear1();
                break;

        case 5:
            one.isfull();
            break;

        case 6:
            one.isempty();
            break;

        case 7:
            one.size1();
            break;

        case 8:
            one.display();
            break;
        
        default:
            break;
        }
    }
    



    return 0;
}