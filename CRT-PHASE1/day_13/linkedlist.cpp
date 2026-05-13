#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;

    }
};

void printnodes(node*head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
}

int main (){
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    node* fifth = new node(5);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    printnodes(head);
    return 0;

}