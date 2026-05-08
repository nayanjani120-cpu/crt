#include <iostream>
using namespace std;

namespace virat {
    void show(){
        cout<<"he is the part of RCB"<<endl;

    }

}

namespace rohit{
    void show(){
        cout<<"he is part of MI"<<endl;

    }
}

int main(){
    virat::show();
    rohit::show();
    return 0;
}
