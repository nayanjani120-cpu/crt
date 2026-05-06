#include <iostream>
using namespace std;

  class student{
    private:
    int regno= 100;
     public:
    // data members

    string name;
    int rollno;
    // member functions
    void display(){
        cout<<"Name = "<<name<<endl;
        cout<<"Roll no = "<<rollno<<endl;
        cout<<"Reg no = "<<regno<<endl;
        regno++;

    }
};
int main(){
    student s1;
    s1.name = "Nayan";
    s1.rollno = 13;
    s1.display();
    return 0;
}
    
