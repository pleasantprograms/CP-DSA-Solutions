#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map <int,int> m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans=m[4]+m[3];
    int k = m[1]-m[3];
    if (m[2]%2!=0)
    {
        ans+=((m[2]/2)+1);
    }
    else
    {
        ans+=(m[2]/2);
    }
    if (k>0 && m[2]%2!=0)
    {
        k-=2;
    }
    if (k>0)
    {
        if (k%4==0)
        {
            ans+=k/4;
        }
        else
        {
            ans+=((k/4)+1);
        }
    }
    cout << ans << endl;
}