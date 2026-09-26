#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char x;
        cin >> n >> x;
        string s;
        cin >> s;
        int cnt = 0;
        for(int i=0; i<n/2; i++)
        {
            if (s[i]!=s[n-i-1])
            {
                if (s[i]==x || s[n-i-1]==x) cnt++;
                else cnt+=2;
            }
        }
        cout << cnt << endl;
    }
}