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
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == num)
        {
            ansF = mid;
            r = mid - 1;
        }
        if (arr[mid] > num)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    l = 0;
    r = n - 1;
    int ansL;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == num)
        {
            ansL = mid;
            l = mid + 1;
        }
        if (arr[mid] > num)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ansF << endl;
    cout << ansL << endl;
}