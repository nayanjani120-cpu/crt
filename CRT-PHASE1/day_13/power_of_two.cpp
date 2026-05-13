#include <iostream>
using namespace std;

bool ispow(int x){
    if(x==0)
    return false;
    if(x==1)
    return true;
    return ( x%2 == 0) && ispow(x/2);
    
}


int main(){
    int t ;
    cout<<"how many test : ";
    cin>>t;
    int x;
    while(t-- ){
      
        cout<<"Enter a number : ";
        cin>>x;
        bool result = ispow(x);

        if(result)
        cout<<x<<" is power of 2"<<endl;
        else
        cout<<x<<" is power not of 2"<<endl;
    } 
    return 0;

}