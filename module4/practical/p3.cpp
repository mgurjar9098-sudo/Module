//  Write two small programs: one using Procedural Programming (POP) to calculate the 
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
// class and object for the same task. 
// o Objective: Highlight the difference between POP and OOP approaches.


// Key Differences Explained

// Focus
// POP emphasizes writing procedures (functions).
// OOP emphasizes modeling real-world entities as objects.

// Data Protection
// POP does not provide strong data hiding.
// OOP protects data using concepts like encapsulation and access modifiers.

// Modularity
// POP is less modular as data and functions are separate.
// OOP bundles data and methods together, improving modularity.

// Maintenance
// POP becomes harder to manage as programs grow larger.
// OOP is easier to maintain due to structured and reusable code.

#include<iostream>
using namespace std;
class rect{
    public:
    int lenght;
    int breath;
    public:
    rect(int l,int b){
        lenght=l;
        breath=b;
    }
    void display(){
        cout<<"area of rectangle is using class "<<lenght*breath;
    }


};
void rectangle(int l ,int b){
    cout<<"area of rectangle is using function"<<l*b<<endl;
}
using namespace std;

int main(){
  rectangle(3,4);
  rect r1(4,5);
  r1.display();
}