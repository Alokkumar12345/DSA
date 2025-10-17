#include <iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<"enter the key:";
    cin>>key;
    int l=0;
    int r=n-1;
    int ans;
    while(l<=r){
        int mid=(l+r)/2;
        if (arr[mid]==key){
            ans = mid;
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
      
    }
    cout<<ans;
}