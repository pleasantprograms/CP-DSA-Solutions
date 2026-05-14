#include <bits/stdc++.h>
using namespace std;
bool check26(string s)
{
    int n = s.size();
    for (int i=0; i<n; i++)
    {
        if (s[i]=='2')
        {
            if (s[i+1]=='0')
            {
                if (s[i+2]=='2')
                {
                    if (s[i+3]=='6')
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool check25(string s)
{
    int n = s.size();
    for (int i=0; i<n; i++)
    {
        if (s[i]=='2')
        {
            if (s[i+1]=='0')
            {
                if (s[i+2]=='2')
                {
                    if (s[i+3]=='5')
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (check26(s))
        {
            cout << 0 << endl;
        }
        else if (check25(s))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}