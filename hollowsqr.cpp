#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the count" << endl;
    cin >> n;
    int a = 1;
    int b = n;
    for (int i = b; i > 0; i--)
    {

        cout << "*";
    }
    cout << endl;

    int d = n;
    int x = n - 2;

    while (x != 0)
    {
        cout << "*";
        for (int i = 2; i < d; i++)
        {

            cout << " ";
        }
        cout << "*" << endl;

        x--;
    }

    int c = n;
    for (int i = c; i > 0; i--)
    {

        cout << "*";
    }
}