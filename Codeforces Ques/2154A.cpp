#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int count=0;

        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
            {
                count++;
            }
        }

        for (int i=0; i<n; i++)
        {
            for (int j=k-1; j>0; j--)
            {
                if (s[i]=='1' && s[i-j]=='1')
                {
                    count--;
                    break;
                }
            }
        }
        cout << count << endl;
    }
}