#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,4,8,9,2};
    
    for(int i=0;i<5;i++){
      int min=i;
      for(int j=i;j<5;j++){
        if(arr[min]>arr[j]){
            min=j;
            swap(arr[i],arr[min]);

        }
        
      

      }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}