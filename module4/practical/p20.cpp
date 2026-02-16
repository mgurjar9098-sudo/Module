// Write a program that implements inheritance using a base class Person and derived 
// classes Student and Teacher. Demonstrate reusability through inheritance. 

#include<iostream>
using namespace std;

class Person{
        protected:
        string name;
        int age;
        public:
        Person(string n,int a){
            name=n;
            age=a;
        }
        public:
        void displayperson(){
            cout<<"Person name is "<<name<<endl;;
            cout<<"person age is "<<age<<endl;
        }
    };
class Student:public Person{
    private:
    string grade;
    public:
    Student(string n, int a, string g) : Person(n, a) {
        grade = g;
    }
    void displayStudent() {
        displayperson();  // Reusing base class function
        cout << "Grade: " << grade << endl;
    }
};
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a) {
        subject = s;
    }

    void displayTeacher(){
        displayperson();  // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main(){

    Student s1("ram",12,"A");
    Teacher t1("bravo",22,"English");
    s1.displayStudent();
    t1.displayTeacher();

    
}