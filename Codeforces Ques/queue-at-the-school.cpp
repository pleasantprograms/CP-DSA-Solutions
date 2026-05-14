#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s ;

    while (t--)
    {
        int j=0;
        while (j<n-1)
        {
            if (s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j+=2;
            }

            else
            {
                j++;
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        cout << s[i] ;
    }
}