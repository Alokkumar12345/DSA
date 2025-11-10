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
Node* rotatelinklist(Node* &head,int k){
    Node* temp=head;
    int count=1;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    Node* temp1=head;
    int count1=count-k;
    while(count1!=count){
        temp1=temp1->next;
        
    }
    Node* temp2=temp1->next;
    temp1->next=NULL;
     while(temp2!=NULL){
        count++;
        temp2=temp2->next;
    }
    return temp2->next=temp1;
}
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* node1=new Node(1);
    Node* node2=new Node(2);
     Node* node3=new Node(3);
      Node* node4=new Node(4);
       Node* node5=new Node(5);
       Node* node6=new Node(6);
    node1->next=node2;
       node2->next=node3;
       node3->next=node4;
       node4->next=node5;
       node5->next=node6;
       node6->next=NULL;
       Node* node8=rotatelinklist(node1,2);
       display(node8);

}