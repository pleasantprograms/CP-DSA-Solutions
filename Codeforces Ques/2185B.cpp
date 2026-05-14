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
        int p=INT_MIN;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            p = max(p,x);
        }
        cout << p*n << endl;
    }
}