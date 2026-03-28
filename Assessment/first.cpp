#include<iostream>
using namespace std;
void calculator(int op,int num1,int num2){

    switch(op){
        case 1:
        cout<<"Addition is = "<<num1+num2<<endl;
        break;

        case 2:
        cout<<"Subtraction is = "<<num1-num2<<endl;
        break;

        case 3:
        cout<<"Multiplication is = "<<num1*num2<<endl;
        break;

        case 4:
        cout<<"Division is = "<<num1/num2<<endl;
        break;
        
        default:
        cout<<"Invalid choice";
        break;
    }

}
int main(){
    int n,n2,op;
    while(true){
    cout<<"--------------Manu ---------------------"<<endl<<endl;
    cout<<"1 Addition"<<endl;
    cout<<"2 Subtraction"<<endl;
    cout<<"3 Multiplication"<<endl;
    cout<<"4 Division"<<endl;

    cout<<"Enter the choice : ";
    cin>>op;
    

   if(op>=1 && op<=4){

    cout<<"\n\n";
    cout<<"Enter first number : ";
    cin>>n;
    cout<<"Enter Second number : ";
    cin>>n2;
     calculator(op,n,n2);
   }else{
    cout<<"invalid choice"<<endl;
    break;
   }
}

}