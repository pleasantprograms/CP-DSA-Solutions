#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        vector<pair<long long int,long long int>> a;
        for(long long int i=0; i<n; i++) 
        {
            long long int x;
            cin >> x;
            a.push_back({x,i+1});
        }
        sort(a.begin(),a.end(),greater<pair<long long int,long long int>>());
        long long int dist=0;
        for(long long int i=0; i<n; i++)
        {
            dist+=(2*(a[i].first)*((i/2)+1));
        }
        vector<long long int> b(n+1);
        b[0]=0;
        for(long long int i=0; i<n; i++)
        {
            if (i%2==0)
            {
                b[a[i].second]=(i/2)+1;
            }
            else
            {
                b[a[i].second]=(-1)*((i/2)+1);
            }
        }
        cout << dist << endl;
        for(int i=0; i<b.size(); i++)
        {
            cout << b[i] << " " ;
        }
        cout << endl;
    }
}