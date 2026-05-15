#include <iostream>
using namespace std;

class stack{
    private:
    int arr[100];
    int top;
    public:
    stack(){
        top = -1;
    }
    




        void push(int val){

            if(top<99){
            top++;
            arr[top]=val;

            }
            else{
                cout<<"stack is overflow ";
            }
        }
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"stack is underflow "<<endl;
            }


        }

        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"stack is empty";
            return -1;
            }
            
        }
        int size(){
            if(top>=0){
                return top+1;
            }
            else{
                cout<<"stack is empty "<<endl;
            return top+1;
            }

        }
        bool isempty(){
            if(top<=-1){
                return true;
            }
            else {
                return false;
                    
            }

        }
    

};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"top element : "<<s.peek()<<endl;
    cout<<"size : "<<s.size()<<endl;
    s.pop();
    cout<<"top element : "<<s.peek()<<endl;
   if( s.isempty())cout<<"TRUE"<<endl;
   else cout<<"FALSE"<<endl;
    


    return 0;
}