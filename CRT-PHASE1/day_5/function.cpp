#include <iostream>
using namespace std;
int coffee(int shots){
    return shots*30
    ;

}
int main (){
    int shots;
    cout<<"enter the no. of shots =";
    cin>>shots;
    cout<<"total value = "<<coffee(shots)<<"ml"<<endl;

    return 0;

}