#include <iostream>
#include <queue>
#include <string>
using namespace std;
void enque(values,val){
    if(values.size()==capacity){
         cout<<"overflow";
         return;
    }
    rear=(rear+1)%capacity;
    values[rear]=val;
    size++;
}
void deque(){
    if(size==0){
         cout<<"underflow";
         return;
    }
    front=(front+1)%capacity;

    size--;
}
int main(){
    queue<int>values;
    int capacity=5;
    int val=20;
    enque(values,val)

}