#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int> m;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
        }
        unordered_map<char,int> t = m;
        for(int i=0; i<n; i++)
        {
            m[s[i]]--;
            
        }
    }
}