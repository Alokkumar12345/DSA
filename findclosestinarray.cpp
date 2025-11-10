#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the number: ";
    int val,k;
    cin>>val;
    cin>>k;
    int start=0;
    int end=n-1;
    int min;
    while(start<end){
        int mid=(start+end)/2;
        if (arr[mid]>val){
            end=mid-1;
            min=mid;
            
        }else {
            end=mid-1;
        }
            
        
    }
    int l=min-1;
    int r=min;

int count=0;
    while(count<=k){
        if (l<0){
        arr[count]=arr[r];
        r++;
        count++;
        }else if(r<=l){}
    
}