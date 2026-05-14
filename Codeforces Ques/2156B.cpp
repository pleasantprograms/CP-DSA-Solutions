#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> qu(q);
        int ca=0;

        for(int i=0; i<q; i++)
        {
            cin >> qu[i] ;
        }
        
        for(int i=0; i<n; i++)
        {
            if (s[i]=='A')
            {
                ca++;
            }
        }
        if (ca==n)
        {
            for(int i=0; i<q; i++)
            {
                cout << qu[i] << endl;
            }
        }
        else
        {
            int ans=0;
            int i=0; int j=0;
            while(qu[i]!=0)
            {
                if (s[j]=='B')
                {
                    qu[i]/=2;
                    ans++;
                    j++;
                    if (j==n)
                    {
                        j=0;
                    }
                    if (qu[i]==0)
                    {
                        i++;
                        j=0;
                        cout << ans << endl;
                        ans=0;
                    }
                }
                else
                {
                    qu[i]--;
                    ans++;
                    j++;
                    if (j==n)
                    {
                        j=0;
                    }
                    if (qu[i]==0)
                    {
                        i++;
                        j=0;
                        cout << ans << endl;
                        ans=0;
                    }
                }
                if (i==q) break;
            }
        }
    }
    return 0;
}