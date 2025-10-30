#include <iostream>
using namespace std;
void number(int n,int x){
    if (n<=x){
    cout<<n<<" ";
    }
    number(n+1,x);
} 
void number(int x){
    if (x>0){
    cout<<x<<" ";
    }
    number(x-1);
} 
void  numbe(int x){
    if(x>5){
        return;
    }
    numbe(x+1);
    cout<<x<<" ";
}
int main(){
    int a,b=1;
    cin>>a;
    numbe(a);
    
}