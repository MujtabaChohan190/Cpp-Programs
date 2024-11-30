#include<iostream>
using namespace std;

class BankAccount {
    private:
    string accountNumber;
    double balance;

    public:
    BankAccount(string Accnum){
        accountNumber = Accnum;
        balance = 0;
    }

    void deposit(double amount){
        balance+= amount;
        cout<<"Deposited : "<<amount<<endl;
    }

    void withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient Balance."<<endl;
        }else {
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }

    void checkBalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount myAccount("12789"); //Here now you have assigned the account number and balance is initialized to 0
        // Perform some operations
    myAccount.deposit(1000);  
    myAccount.withdraw(500);  
    myAccount.checkBalance(); 

    myAccount.withdraw(600); 
    myAccount.checkBalance(); 

    return 0;
}


