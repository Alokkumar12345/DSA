#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    int num;
    cout<<"enter the number of shift: ";
    cin>>num;
    num=num%n;
     int start = 0; int end = n-num-1;
     int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
    start = n-num; end = n-1;
     
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
    start = 0; end = n-1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }

     for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    };

}