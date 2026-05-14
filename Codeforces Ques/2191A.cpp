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
        char col[n];
        int count=1;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if (count%2==0)
            {
                col[x-1]='R';
            }
            else
            {
                col[x-1]='B';
            }
            count++;
        }
        int a=0;
        for (int i=0; i<n-1; i++)
        {
            if (col[i]==col[i+1])
            {
                cout << "NO" << endl;
                a=1;
                break;
            }
        }
        if (a==0)
        {
            cout << "YES" << endl;
        }
    }
}