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
void getmiddle(Node* &head){
    Node* temp=head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;

    }
    Node* temp1=head;
    for (int i=1;i<=count/2;i++){
        temp1 = temp1->next;
    }
    cout<<temp1->data;
}

int main(){
    Node* node1=new Node(1);
    Node* node2=new Node(2);
     Node* node3=new Node(3);
      Node* node4=new Node(4);
       Node* node5=new Node(5);
       node1->next=node2;
       node2->next=node3;
       node3->next=node4;
       node4->next=node5;
       getmiddle(node1);
       return 0;


}