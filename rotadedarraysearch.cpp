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
    cout << "enter the number :";
    int num;
    cin >> num;
    int l = 0;
    int r = n - 1;
    int ansF;
    while (l < r)
    {
        int mid=(l+r)/2;
        if (arr[mid]==num){
            ansF=mid;
            
        }else if (arr[mid]>num){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    cout<<"gf"<<l;
    int o=0;
    int p=l;
   
    int ansL;
    while (o <= p)
    {
        int mid = (o + p) / 2;
        if (arr[mid] == num)
        {
            ansL = mid;
            break;
            
        }
        if (arr[mid] > num)
        {
            p = mid - 1;
           
        }
        else
        {
            o = mid + 1;
            
        }
    }
      o=l;
     p=n-1;

      while (o <= p)
    {
        int mid = (o + p) / 2;
        if (arr[mid] == num)
        {
            ansL = mid;
            break;
            
        }
        if (arr[mid] > num)
        {
            p = mid - 1;
           
        }
        else
        {
            o = mid + 1;
            
        }
    }
    cout<<ansL;
}