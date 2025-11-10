#include <iostream>
#include <string>
using namespace std;
#include <stack>
int main(){
    stack<int>oprnds;
    stack<char>optr;
    string s;
    for (int i=0;i<s.length();i++){
        char ch=s[i];
        if (ch==' '){
            continue;
        }
        if(ch=='('){
            optr.push(ch);
        }else if(isdigit(ch)){
            oprnds.push(ch-'0');
        }else if(ch==')'){
            while(optr.empty()&&optr.top()!='('){
                char optrs=optr.top();
                int v2=oprnds.top();

            }
        }
    }
} 