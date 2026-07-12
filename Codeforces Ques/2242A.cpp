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
        int k;
        cin >> k;
        int c2 = 0;
        int c3 = 0;
        bool ans = false;
        for(int i=0; i<k; i++)
        {
            int x;
            cin >> x;
            if (x>=3) ans = true;
            else if (x==2) c2++;
        }
        if (c2>=2) ans = true;

        if (ans==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}