#include <iostream>
using namespace std;
class Node {
    public:
     int data;
    Node* next;
    Node(int val){
        data = val;
        next=NULL;
    }
    
};
void detectloop(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast){
            cout<<"got the loop";
            return;
        }
    }
    
}
int main(){
    Node* node1=new Node(1);
    Node* node2=new Node(2);
     Node* node3=new Node(3);
      Node* node4=new Node(4);
       Node* node5=new Node(5);
       Node* node6=new Node(6);
    Node* node7=new Node(7);
     Node* node8=new Node(8);
       node1->next=node2;
       node2->next=node3;
       node3->next=node4;
       node4->next=node5;
       node5->next=node6;
       node6->next=node7;
       node7->next=node8;
       node8->next=node4;
       detectloop(node1);
       return 0;


}