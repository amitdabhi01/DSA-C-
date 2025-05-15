#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    public:
        int id;
        string name;

    Student(int id, string name){
        this->id = id;
        this->name = name;
    }
};

class Studentlist{
    public:
        vector<Student>list;

        void addStudent(int id, string name){
            Student st(id, name);
            list.push_back(st);
        }

        void display(){
            for (Student s : list)
            {
                cout << " id: " << s.id << " name: " << s.name << endl;
            }
        }

        void searchStudent(int id){
            for (Student s : list)
            {
                if (s.id == id)
                {
                    cout << "Enter id to serach " << id << " name: " << s.name << endl;
                }  
            }
        }

        void removeStudent(int id){
            for (Student s : list)
            {
                if (s.id == id)
                {
                    cout << "Enter id to remove " << list.e
                }
            }
            
        }
};


int  main(){
    int choice, id;
    string name;

    Studentlist list;

    while (choice!=0)
    {
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "id: ";
            cin >> id;
            cout << "name: ";
            cin >> name;
            list.addStudent(id, name);
            break; 
           
        case 2:
            cout << "id: ";
            cin >> id;
            list.searchStudent(id);
            break;

        case 3:
            cout << "id: ";
            cin >> id;
            list.removeStudent(id);
            break;

        case 4:
            list.display();
            break; 
        
        default:
            break;
        }
    }
    

    return 0;
}