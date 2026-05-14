#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        int c0=0;
        int cns=0;
        string s;
        cin >> n >> k ;

        for (int i=0; i<n; i++)
        {
            cin >> s[i];
        }

        for (int i=0; i<n; i++)
        {
            if (s[i]=='0')
            {
                c0++;
            }

            else
            {
                for (int j=1; j<=k && i+j<n; j++)
                {
                    if (s[i+j]=='0')
                    {
                        cns++;
                    }
                }
            }
        }
        cout << c0-cns << endl;
    }
}