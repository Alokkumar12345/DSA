#include <iostream>
#include <algorithm> 
using namespace std;
int fn(int n){
    if(n==1||n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int onestep=fn(n-1);
    int secondstep=fn(n-2);
    int z=0+onestep+secondstep;
    int min=(z,onestep+secondstep);
    
    return min;
}
int main(){
    int a;
    cin>>a;
    int b=fn(a);
    cout<<b;

}