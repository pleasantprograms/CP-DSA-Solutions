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
        string s;
        cin >> s;
        int i=0;
        while(i<s.length()-1)
        {
            if (s[i]=='Y' && s[i+1]=='N')
            {
                s.erase(i+1,1);
            }
            else if (s[i]=='N' && s[i+1]=='N')
            {
                s.erase(i+1,1);
            }
            else if (s[i]=='N' && s[i+1]=='Y')
            {
                s[i]='Y';
                s.erase(i+1,1);
            }
            else
            {
                i++;
            }
        }
        if (s.length()==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}