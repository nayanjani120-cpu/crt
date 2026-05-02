#include <iostream>
using namespace std;

int main(){
int choice ;
cout<<" enter your choice :";
cin>> choice ;

switch (choice)
{
case 1:

cout<<"general support";

    break;
case 2:

cout<<"for biling";

break;

case 3:
cout<<"technical support";

break;

case 4:
cout<<"speak to agent ";
break;

default:
cout<<"invalid input";

    break;
}

return 0;

}
