#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *pre;
    Node(int val)
    {
        data = val;
        pre = NULL;
        next = NULL;
    }
};
Node *deleteat(Node *&head,int val)
{
    Node *temp=head;
    int count=0;
    while(count<val){
        count++;
              

    }
    
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    node1->pre = NULL;
    node1->next = node2;
    node2->pre = node1;
    node2->next = node3;
    node3->pre = node2;
    node3->next = node4;
    node4->pre = node3;
    node4->next = node5;
    node5->pre = node4;
    Node *inserted = deleteat(node1);
    display(inserted);
}