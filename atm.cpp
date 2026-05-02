#include <iostream>
using namespace std;

int main(){
    float balance, amount;
    cout<<"balance = ";
    cin>> balance;
    cout<<" amount = ";
    cin>> amount;
    if(amount>0 && amount<= balance)
    {
        balance-=amount;
        cout<<"transaction successfull . new balance = "<<balance<<endl;

    }
    else{
        cout<<"transaction failed . invalid balance "<<endl;
    }

    return 0;

}