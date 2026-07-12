#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> t(100005,-1);

int f(vector<int>& h, int n)
{
    if (n==1) return abs(h[1]-h[0]);
    if (n==0) return 0;

    if (t[n]!= -1) return t[n];
    else
    {
        return t[n] = min(abs(h[n]-h[n-1]) + f(h, n-1), abs(h[n]-h[n-2]) + f(h,n-2));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++) cin >> h[i];

    cout << f(h,n-1) << endl;
    return 0;
}