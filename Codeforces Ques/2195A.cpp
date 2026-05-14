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
        int p=0; 
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if (x==67 && p==0)
            {
                cout << "YES" << endl;
                p=1;
            }
        }
        if (p==0)
        {
            cout << "NO" << endl;
        }
    }
}