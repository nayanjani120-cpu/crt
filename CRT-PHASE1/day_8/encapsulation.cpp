#include <iostream>
using namespace std;

class ATM {
    private:
    int balance;

    public:


    //encapsulation
     void setbalance(int balance){
        this->balance=balance;

    }

    void withdraw(int amount){
        if(amount>balance){
            cout<<"insufficient balance"<<endl;


        }
        else{
            balance-=amount;
            cout<<"withdraw ammount: "<<amount<<endl;

        }

    }
    int getbalance(){
        return balance;

    }



};

int main(){
    int n;
    cin>>n;
    ATM a;
    a.setbalance(n);
    cout<<"current balance: "<<a.getbalance()<<endl;
    a.withdraw(1500);
    cout<<"current balance: "<<a.getbalance()<<endl;
    return 0;
}