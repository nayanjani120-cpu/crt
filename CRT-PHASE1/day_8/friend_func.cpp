#include <iostream>
using namespace std;

class area{
    private:
    int length;
    int width;
    public:
    void setsides(int l, int w){
        length=l;
        width=w;

    }
    friend void showarea(area a);
};

void showarea(area b){
    int area = b.length * b.width;
    cout<<"area: "<<area<<endl;

}

int main(){
    
    area a;
    a.setsides(10,20);
    showarea(a);


    return 0;
}