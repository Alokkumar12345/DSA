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
       return 0;


}