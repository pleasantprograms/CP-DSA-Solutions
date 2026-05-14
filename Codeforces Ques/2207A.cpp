#include <bits/stdc++.h>
using namespace std;

int count(string p)
{
    int c=0;
    for(int i=0; i<p.size(); i++)
    {
        if (p[i]=='1')
        {
            c++;
        }
    }
    return c;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string o, s;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        o = s;
        for(int i=1; i<n-1; i++)
        {
            if (s[i-1]=='1' && s[i+1]=='1')
            {
                s[i]='1';
            }
        }
        int k = count(s);
        for(int i=1; i<n-1; i++)
        {
            if (s[i-1]=='1' && s[i+1]=='1')
            {
                s[i]='0';
            }
        }
        cout << count(s) << " " << k << endl;
    }
}