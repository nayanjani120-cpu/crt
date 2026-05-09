#include <iostream>
using namespace std;

int area(int length , int width){
    return length*width;

}
int main(){
    int length , width;
    cout<<"length = ";
    cin>>length;
    cout<<"width = ";
    cin>>width;
    cout<<"area of rectangle = "<<area(length , width);
    return 0;

}