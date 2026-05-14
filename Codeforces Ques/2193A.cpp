#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        for(int i=1; i<=n; i++)
        {
            int p;
            cin >> p;
            sum+=p;
        }
        if (sum==s)
        {
            cout << "YES" << endl;
        }
        else if (sum>s)
        {
            cout << "NO" << endl;
        }
        else if ((s-sum)%x==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}