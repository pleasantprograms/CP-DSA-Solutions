#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        set<char> vec;
        for(int i=0; i<n; i++)
        {
            string x;
            cin >> x;
            vec.insert(x[0]);
        }
        bool ans = true;
        for(int i=0; i<m; i++)
        {
            string x;
            cin >> x;
            for(int j=0; j<x.length(); j++)
            {
                if (vec.find(tolower(x[j]))==vec.end())
                {
                    ans = false;
                }
            }
        }
        if (ans==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}