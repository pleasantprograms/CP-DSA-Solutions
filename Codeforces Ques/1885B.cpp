#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char,int> m;
        int count = 0;
        for(int i=0; i<n; i++) 
        {
            m[s[i]]++;
        }
        for(auto pair : m)
        {
            if (pair.second%2!=0)
            {
                count++;
            }
        }
        if (count > k+1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }
}