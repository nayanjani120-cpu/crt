#include <iostream>
#include <string>
using namespace std;
void reversestr (string str, int n){
    int i=0;
    int j= n-1;

    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;

    }
    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";

    }
   
       
    

}


int main(){
    string str =  "hello";
    int n = str.length();
    cout<<"length of str : "<<n<<endl;
    reversestr(str,n);

    return 0;




}