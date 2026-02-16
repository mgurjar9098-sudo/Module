// Create a class BankAccount with data members like balance and member functions 
// like deposit and withdraw. Implement encapsulation by keeping the data members 
// private. 
#include<iostream>
using namespace std;
class BankAccount{
    private:
    float balance;
    public:
      // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }
    void deposit(double amount){
        
        if(amount>0){
            balance=balance+amount;
            cout<<"Deposit is "<<amount<<endl;
        }
        else{
              cout << "Invalid deposit amount!" << endl;
        }

    }
    void withdraw(double amount){
          if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
      void displayBalance(){
        cout << "Current Balance: " << balance << endl;
    }

};

int main(){

    BankAccount b1(1000);
    b1.displayBalance();
    b1.withdraw(1000);
     b1.displayBalance();


}