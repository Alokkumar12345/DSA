
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> values;
    int arr[6] = {3,5,1,9,2,0};
    int arr1[6] = {-1, -1, -1, -1,-1,-1};
    for (int i = 5; i>=0; i--)
    {
        int currentele = arr[i];
        while (!values.empty() &&   currentele<arr[values.top()])
        {
            int idx = values.top();
            values.pop();
            arr1[idx] = currentele;
        }
        values.push(i);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
//NGOR
//NGOL
//NSOR
//NSOL