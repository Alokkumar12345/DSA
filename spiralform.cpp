#include <iostream>
using namespace std;
int main(){
    int arr[4][5]={{1,2,3,4,5},
                   {6,7,8,9,10},
                    {11,12,13,14,15},
                     {16,17,18,19,20}};

        int dir,top,down,left,right,m,n;
        m=4;
    n=5;
        top=0;
        right=n-1;
        left=0;
        down=m-1;
        dir=0;
      while(top<down&&left<right){
            if(dir==0){
                for(int i=0;i<right;i++){
                  cout<<arr[top][i];
                }
            }
      }
}
