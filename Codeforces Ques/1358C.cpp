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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << (c-a)*(d-b) + 1 << endl;
    }
}