#include <iostream>
using namespace std;

class player {
    public:
    string name;
    int age;
    void setname(string n){
        name =n;

    }
};

class cricketer: public player{
    public:
    int runs;
    void setruns(int r){
        runs = r;

    }
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Runs : "<<runs<<endl;
    }


};
    
int main(){
    int r;
    cout<<"Enter runs : ";
    cin>>r;
    cricketer c1;
    c1.setname("virat");
    c1.setruns(r);
    c1.show();


    return 0;

}