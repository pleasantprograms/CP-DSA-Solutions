#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    string s;
    cin >> s;
    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]=='1')
        {
            ans+=x;
        }
        else if (s[i]=='2')
        {
            ans+=y;
        }
        else if (s[i]=='3')
        {
            ans+=z;
        }
        else
        {
            ans+=w;
        }
    }
    cout << ans << endl;
}