#include <iostream>
using namespace std;

class employee{
    public:
    static int reg_no;

    employee(){
        reg_no++;
    }

    static void show(){
        cout<<"employee reg no: "<<reg_no<<endl;
    }
};
int employee::reg_no=100;


int main(){
    employee e1;
    employee e2;
    employee e3;
    employee e4;
    employee :: show();


    return 0;
}