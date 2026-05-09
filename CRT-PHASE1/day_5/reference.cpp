#include <iostream>
using namespace std;
void applydisc(double &bill){
    bill = bill -(bill*0.10);
}
int main (){
    double bill;
    cout<<"enter the bill =";
    cin>>bill;
    cout<<"bill = "<<bill<<endl;
    applydisc(bill);
    cout<<"bill after discount = "<<bill<<endl;
    return 0;
}