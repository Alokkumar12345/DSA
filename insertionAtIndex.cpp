#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int a,num;
    cout<<"Enter the index"<<endl;
    cin>>a;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int arr[n+1];
    for (int i=0;i<n+1;i++){
        if (i==a){
            arr[i]=num;
            arr[i+1]=arr[i];
        }
        

    }

}