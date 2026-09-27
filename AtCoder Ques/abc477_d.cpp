#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<char> col(n+5, 'a');
    vector<bool> tile(n+5, 0);
    vector<int> time(n+5,0);
    char lastc = 'a';
    int lastt = 0;
    for(int i=1; i<=q; i++)
    {
        int x;
        cin >> x;
        if (x==1)
        {
            int p;
            cin >> p;
            if (tile[p]==0)
            {
                tile[p] = 1;
                if (lastt>=time[p]) col[p] = lastc;
            }
            else
            {
                time[p] = i;
                tile[p]=0;
            }
        }
        else
        {
            char ch;
            cin >> ch;
            lastc = ch;
            lastt = i;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if (tile[i]==0)
        {
            if (time[i]<lastt)
            {
                col[i] = lastc;
            }
        }
        cout << col[i] ;
    }
    cout << endl;
}