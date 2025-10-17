#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    while(n!=0){


    for (int i = n-1; i > 0; i--)
    {
        cout <<" ";
       
    }
    for(int i=1;i<cnt;i++){
        cout<<i;
    }
    for(int i = cnt;i>0;i--){
      cout<<i;
    }
    cout<<endl;
    cnt++;
    n--;
}
        
    
}