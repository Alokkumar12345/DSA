#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;
int solve(int a,int b,char c){
    int x=a  b
}
int main(){
    stack<int>oprnds;
    string str="-7+45+20";
    for(int i= str.length()-1;i>=0;i--){
        char ch =str[i];
        if(isdigit(ch)){
            oprnds.push(ch);
        }
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            int v1=oprnds.top();
            oprnds.pop();
            int v2=oprnds.top();
            oprnds.pop();
            int value=solve(v1,v2,ch);
        }
        





    }
   
}