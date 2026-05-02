#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter the age = ";
    cin>>age;
    if(age>=100){
        cout<<"  eligible to vote consider as senior citizen"<<endl;
    }

        else if (age>17&&age>99){
        
                cout<<"eligible to vote";
            }

            else if (age<0){
                        
                    cout<<"invalid age";
                        }

                        else {
                            cout<<"eligible to vote ";
                        }
                    
                 return 0;
   
    
}