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
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0; i<n; i++) cin >> p[i];
        bool ans = false;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if (p[i]==p[j]) 
                {
                    ans = true; 
                    break;
                }
            }
            if (ans) break;
        }
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}