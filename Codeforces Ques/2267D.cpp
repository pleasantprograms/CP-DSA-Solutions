#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> p(n+5);
        vector<int> pos(n+5);
        for(int i=1; i<=n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i%2;
        }

        int cnte = 0, cnto = 0;
        bool ans = true;
        for(int i=n; i>=1; i--)
        {
            if (pos[i]==0) cnte++;
            else cnto++;

            if (abs(cnte-cnto)>1)
            {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}