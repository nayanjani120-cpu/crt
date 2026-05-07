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
  

};
class indiancricketer: public cricketer{
    public:
    string state;
    void setstate(string s){
        state = s;
    }

      void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Runs : "<<runs<<endl;
        cout<<"State : "<<state<<endl;
    }


};
int main(){
    int r;
    cout<<"Enter runs : ";
    cin>>r;
    string s;
    cout<<"Enter state : ";
    cin>>s;
    indiancricketer c1;
    c1.setname("virat");
    c1.setruns(r);
    c1.setstate(s);
    c1.show();
    return 0;
}