#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
        }
        if (n==1)
        {
            cout << 1 << endl;
        }
        else if (n==2)
        {
            cout << 2 << " " << 2 << endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout << 2 << " " ;
            }
            cout << endl;
        }
    }
}