#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<int> u = v;
    sort(u.begin(),u.end());
    vector<ll> pref1;
    vector<ll> pref2;
    ll sum1 = 0;
    ll sum2 = 0;
    pref1.push_back(sum1);
    pref2.push_back(sum2);
    for(int i=0; i<n; i++)
    {
        sum1+=v[i]+0LL;
        sum2+=u[i]+0LL;

        pref1.push_back(sum1);
        pref2.push_back(sum2);
    }

    int m;
    cin >> m;
    while(m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t==1)
        {
            cout << pref1[r] - pref1[l-1] << endl;
        }
        else
        {
            cout << pref2[r] - pref2[l-1] << endl;
        }
    }
}