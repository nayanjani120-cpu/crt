#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int regno;
    string mobileno;
    string email;
    int grade;


    // default constructor
    student(){
        name = "";
        rollno = 0;
        regno = 0;
        email = "";
        mobileno = "";
        grade = 0;
    }

    // parameterized constructor
    student(string n, int r, int regno, string mob, string email, int grade){
        name =n;
        rollno = r;
        this->regno = regno;
        mobileno = mob;
        this->email = email;
        this->grade = grade;
    }

    void show(){
        cout<<"name = "<<name<<endl;
        cout<<"rollno = "<<rollno<<endl;
        cout<<"regno = "<<regno<<endl;
        cout<<"mobileno = "<<mobileno<<endl;
        cout<<"email = "<<email<<endl;
        cout<<"grade = "<<grade<<endl;

    }
};
int main(){
    string n, email, mob;
    int r, regno, grade;
    cout<<"enter name : ";
    cin>>n;
    cout<<"enter rollno : ";
    cin>>r; 
    cout<<"enter regno : ";
    cin>>regno;
    cout<<"enter mobileno : ";
    cin>>mob;
    cout<<"enter email : ";
    cin>>email;
    cout<<"enter grade : ";
    cin>>grade;

    student s1(n, r, regno, mob, email, grade);

    student s2;

    s1.show();


    return 0;


}