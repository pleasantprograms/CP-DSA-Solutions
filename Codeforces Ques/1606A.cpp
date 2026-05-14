#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cab = 0;
        int cba = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                cab++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')
            {
                cba++;
            }
        }
        if (s[0] == s[n - 1])
        {
            cout << s << endl;
        }
        else
        {
            if (s[n-1]=='b' && s[0]=='a')
            {
                s[n-1]='a';
            }
            else if (s[n-1]=='a' && s[0]=='b')
            {
                s[n-1]='b';
            }
            cout << s << endl;
        }
    }
}