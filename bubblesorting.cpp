#include <iostream>
using namespace std;


int main()
{
    int arr[5]={1,3,2,4,5};
    int count=0;
    for (int i=0;i<5;i++){
        for(int j = 0;j<4;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                count++;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl<<count;
    return 0;
}