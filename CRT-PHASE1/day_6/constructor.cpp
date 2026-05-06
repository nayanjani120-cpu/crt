#include <iostream>
using namespace std;
class student{
    //data members
    public:
    string name;
    int rollno;
    //default constructor
    student(){
        name= "Nayan";
        rollno = 13;
    }
    void show(){
        cout<<"Name = "<<name<<endl;
        cout<<"Roll no = "<<rollno<<endl;
        cout<<"This is default constructor is called"<<endl;
    }
};

int main(){
    student s1;
    s1.show();
    return 0;
}