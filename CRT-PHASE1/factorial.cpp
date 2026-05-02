#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"a=";
    cin>>a;
    int factorial = 1 ;
    for(int i=1 ; i<=a ; i++){
        factorial = factorial * i ;
    }
    cout<<"Factorial of "<<a<<" is "<<factorial<<endl;
    return  0 ;

}