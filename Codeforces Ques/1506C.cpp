#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int p = a.length();
        int q = b.length();
        int ans = p+q;
        for(int i=0; i<a.length(); i++)
        {
            string s;
            for(int j=i; j<a.length(); j++)
            {
                s.push_back(a[j]);
                int pos = b.find(s);
                int len = j-i+1;
                if (pos!=-1) ans = min(ans,p+q-len*2);
            }
        }
        for(int i=0; i<b.length(); i++)
        {
            string r;
            for(int j=i; j<b.length(); j++)
            {
                r.push_back(b[j]);
                int pos = a.find(r);
                int len = j-i+1;
                if (pos!=-1) ans = min(ans,p+q-len*2);
            }
        }
        cout << ans << endl;
    }
}