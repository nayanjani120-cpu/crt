#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a and b = ";
    cin>>a>>b;
    int *a1= &a;
    int *b1= &b;
    int temp=*a1;
    *a1=*b1;
    *b1=temp;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}