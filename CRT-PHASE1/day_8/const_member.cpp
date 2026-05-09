#include <iostream>
using namespace std;

class car{
    private:
    int speed;

    public:
    car(){
        speed=120;
    }
    void showspeed() const{
        cout<<"the speed of car is : "<<speed<<endl;
    }
};

int main(){
    car c1;
    c1.showspeed();
    return 0;
}