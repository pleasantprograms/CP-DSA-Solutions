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
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> p(3);
        p[0]=a;
        p[1]=b;
        p[2]=c;
        sort(p.begin(),p.end());
        cout << min(p[2]-p[1],p[1]-p[0]) << endl;
    }
}