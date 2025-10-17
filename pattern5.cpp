#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    while (n != 0)
    {
        for (int i = n - 1; i > 0; i--)
        {
            cout <<" ";
        }
        for (int i = 0; i < count; i++)
        {
            cout << " *";
        }
        cout<<endl;
        
         for (int i = 1; i <n-1; i++)
        {
            cout <<" ";
        }
        for (int i = 0; i < count; i++)
        {
            cout << " *";
        }
        cout<<endl;
        count++;
        n--;
    }
}