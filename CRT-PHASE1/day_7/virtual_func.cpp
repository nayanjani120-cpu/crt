#include <iostream>
using namespace std;

class player {
    public:
    virtual void show() 
    {
        cout<<"player class show function"<<endl;

    }

};

class cricketer: public player
{
    public:

    int a;
    void show()
    {
        cout<<"cricketer class show function"<<endl;
    }
    
};

int main(){

    cricketer c1;
    c1.show();

    return 0;
}
   