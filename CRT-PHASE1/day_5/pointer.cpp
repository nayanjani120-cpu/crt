#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
  
    cout<<"address="<<ptr<<endl;
    cout<<"a="<<*ptr<<endl;

    *ptr = 20;
    cout<<"a="<<*ptr<<endl;
    cout<<"a="<<a<<endl;

    return 0;
}