#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"sides of triangle x,y,z : ";
    cin>>x>>y>>z;
    cout << boolalpha << (x == y && y == z);

    return 0;

}