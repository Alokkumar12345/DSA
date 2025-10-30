#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
    node* head = new node(2);
     node* n1 = new node(2);
     node* n2 = new node(2);
     
     head->next=n1;
     n1->next=n2;

}