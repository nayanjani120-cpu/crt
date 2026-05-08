#include <iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:

    ATM(int balance){
        this->balance=balance;
    }
    
    void withdraw(int amount){
        if(amount>balance){
            cout<<"insufficient balance"<<endl;

        }
        else{
            balance-=amount;
            cout<<"withdrawn amount: "<<amount<<endl;

        }
    }

    void showbalance(){
        cout<<"current balance: "<<balance<<endl;
    }
};
int main(){
    
    ATM a(5000);
    a.showbalance();
    a.withdraw(1500);
    a.showbalance();

    return 0;
}