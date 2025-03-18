#include<iostream>
using namespace std;


int main(){

int choice;

int size;
cout << "Enter size: ";
cin >> size;

int arr[50];

for (int i=0; i<size; i++)
{
    cout << "arr[" << i << "]: ";
    cin >> arr[i];
}



while (choice != 0)
{
    cout << endl << "----------------------------------" << endl;
    cout << "Press 1 for Delet element" << endl;
    cout << "Press 2 for Update element" << endl;
    cout << "Press 3 for Insert element" << endl;
    cout << "Press 4 for Print element" << endl;

    cout << endl << "----------------------------------" << endl;
    
    cout << "Enter your choice: ";
    cin >> choice;


    switch (choice)
    {
        case 1:
                int ind;
                cout << "Enter index: ";
                cin >> ind;

                for (int i=ind; i<size-1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
                
                cout << "element deleted successfully...!" << endl;
                break;
        case 2:
                int index;
                cout << "Enter index: ";
                cin >> index;
                int element;
                cout << "Enter element: ";
                cin >> element;

                arr[index] = element;
                
                cout << "element updated successfully";
                break;
        case 3:
                break; 
        case 4:
                for (int i=0; i<size; i++)
                {
                    cout << arr[i] << " ";
                }
                break; 
        default:
                cout <<  "Invalid choice......!";         
    }
}



    return 0;
}