#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ans;
    cin >> s ;

    for (int i=0; i<s.size(); i++)
    {
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y')
        {
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }
    
    for (int i=0; i<ans.size(); i++)
    {
        if (ans[i]>=65 && ans[i]<=90)
        {
            ans[i]+=32;
        }
    }

    for (int i=0; i<ans.size(); i++)
    {
        cout << ans[i] ;
    }
}