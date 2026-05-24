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
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if (x==0) sum+=1+0LL;
            else sum+=x+0LL;
        }
        cout << sum << endl;
    }
}