#include <iostream>
using namespace std;
int main(){
    int arr[5]={15,51,29,85,73};
    for(int i=1;i<5;i++){
         for(int j=i-1;j>=0;j--){
              if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
              }
         }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}