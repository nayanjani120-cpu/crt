#include <iostream>
using namespace std;
void swapnum(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a , b;
    cin>>a>>b;
    swapnum(&a,&b);
    cout<<"a="<<a<<" b="<<b;
}