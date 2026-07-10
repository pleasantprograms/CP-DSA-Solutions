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
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());

        vector<int> prefa;
        vector<int> prefb;

        int suma=0;
        int sumb=0;

        for(int i=0; i<n; i++)
        {
            suma+=a[i];
            sumb+=b[i];
            prefa.push_back(suma);
            prefb.push_back(sumb);
        }
        for(int i=n; i<=2*n; i++)
        {
            int m = 0;
            int u = 0;
            int r = i - floor(i/4);

            m+= (i-n)*100 + prefa[r-i+n-1];
            if (r>=n) u = prefb[n-1];
            else u = prefb[r-1];
            

            if (m>=u)
            {
                cout << i-n << endl;
                break;
            }
        }
    }
    return 0;
}
