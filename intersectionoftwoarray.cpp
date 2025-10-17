#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n];
    int arr1[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    };
    bool count[100]={false};
    for (int i=0;i<n;i++){
        
        for (int j=0;j<m;j++){
            if(count[arr[i]]==false){
             if (arr[i]==arr1[j]){
                cout<<"number: "<<arr1[j]<<endl;
                count[arr[i]]=true;
            }
            
            }
        }
    }
}