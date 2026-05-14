#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int c=0;

        if(n==1)
        {
            cout << 1 << endl;
        }

        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='0'&&s[i-1]!='1'&&s[i+1]!='1'&&i!=n-1&&i!=0)
                {
                    s[i]='1';
                }
                else if(i==n-1&&s[i]=='0'&&s[i-1]!='1')
                {
                    s[i]='1';
                }
                else if(i==0&&s[i]=='0'&&s[i+1!='1'])
                {
                    s[i]='1';
                }
            }

            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    c++;
                }
            }
            cout << c << endl;
        }
    }
}