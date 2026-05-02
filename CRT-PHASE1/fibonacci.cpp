#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"a=";
    cin>>a;
    int b=0, c=1 , d;
    while(c<=a){
        cout<<c<<endl;
        d=b+c;
        b=c;
        c=d;

    }
    return 0 ;
}