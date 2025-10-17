#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    int l = 0;
    int r = n - 1;
    int ansF;
    while (l < r)
    {
        int mid=(l+r)/2;
        if (arr[mid]>arr[r]){
            ansF=arr[mid+1];
            l=mid+1;
            
        }else{
            r=mid;
        }
    }
    cout<<"required ans:"<<arr[l];
}