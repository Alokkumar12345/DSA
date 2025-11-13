
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> values;
    int arr[4] = {1, 3, 2, 4};
    int arr1[4] = {-1, -1, -1, -1};
    for (int i = 0; i < 4; i++)
    {
        int currentele = arr[i];
        while (!values.empty() && currentele > arr[values.top()])
        {
            int idx = values.top();
            values.pop();
            arr1[idx] = currentele;
        }
        values.push(i);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}