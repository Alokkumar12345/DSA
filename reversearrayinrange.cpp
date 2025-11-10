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
Node* reverse(Node* &head){
Node* pre=NULL;
Node* curr=head;
while(curr!=NULL){
    Node* temp=curr->next;
    curr->next=pre;
    pre=curr;
    curr=temp;
}
return pre;
}

Node* reverseInRange(Node* &head,int start,int end){
   int per=-1;
   Node* nodePre=new Node(per);
   nodePre->next=head;
   Node* pre=nodePre;
   Node* curr=head;
   int count=0;
   while(count!=start){
    count++;
    pre=pre->next;
    curr=curr->next;
   }
  Node*temp1=curr;
  pre->next=NULL;

  while(count!=end){
    count++;
    curr=curr->next;
  }
  Node* temp2=curr->next;
  curr->next=NULL;
  Node* newTemp=reverse(temp1);
  
  pre->next=newTemp;
  curr=head;
  while(curr->next!=NULL){
    curr=curr->next;
  }
  curr->next=temp2;
  nodePre->next=NULL;
  return head;
  



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
      Node* node8=reverseInRange(node1,3,5);

      display(node8);
}