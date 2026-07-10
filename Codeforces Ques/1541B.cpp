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
        vector<int> val(n);
        vector<int> pos(200005);
        for(int i=0; i<n; i++)
        {
            cin >> val[i];
            pos[val[i]]=i+1;
        }
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            int x = val[i];
            int y = (n*2)/x;

            for(int j=x+1; j<=y; j++)
            {
                if (pos[j]!=0)
                {
                    if (x*j*1LL == i+pos[j]+1+0LL) cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}