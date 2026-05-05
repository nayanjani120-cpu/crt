#include <iostream>
using namespace std;
void mul(int a = 7){
  cout <<a*7<<endl;
  
}
int main(){
    mul();
    mul(8);
    return 0;
}