#include <iostream>
using namespace std;
class cricketers{
    public:
    string name;
    int runs;
    double avg;

    // parameterized constructor
    cricketers(string n , int r , double avg){
        name = n;
        runs = r; 
        this->avg = avg; 
}
    void show(){
        cout<<"Name = "<<name<<endl;
        cout<<"Runs = "<<runs<<endl;
        cout<<"Average = "<<avg<<endl;
    }
};
int main(){
    cricketers c1("sachin", 10000, 48.6);
    c1.show();
    return 0;
}