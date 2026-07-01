#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans;
    char b1='0', b2='0', b3='0';
    for(int i=0; i<n; i++)
    {
        bool append = true;
        if(i==0 || i==1) append = true;
        else if (i==2)
        {
            b1 = ans[i-1];
            b2 = ans[i-2];
            if (ans[i-2]==ans[i-1] && ans[i-1]==s[i]) append = false;
            else append = true;
        }
        else
        {
            if (b2==b1 && b1==s[i]) append = false;
            else if (b3==b2 && b1==s[i]) append = false;
            else append = true;
        }

        if (append==true) 
        {
            ans.push_back(s[i]);
            b3 = b2;
            b2 = b1;
            b1 = s[i];
        }
    }
    cout << ans << endl;
}