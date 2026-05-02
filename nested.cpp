#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"a = "<<endl<<"b = "<<endl <<"c = ";
    cin>>a>>b>>c;

    if (a>b){
        if(a>c){
        cout<<"a is largest "<<a<<endl;
        }
        else {
        cout<<"c is largest "<<c<<endl;
        }



    }
    
    else{
        if(b>c){
        cout<<"b is largest "<<b<<endl;
        }
        else{
        cout<<"c is largest "<<c<<endl;
        }

    }
    
    return 0;
}