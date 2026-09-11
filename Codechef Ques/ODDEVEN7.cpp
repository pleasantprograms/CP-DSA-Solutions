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
        vector<int> p(n);
        for(int i=0; i<n; i++) cin >> p[i];
        int ev = 0; int odd = 0;
        for(int i=0; i<n; i++)
        {
            if (p[i]%2==0) ev++;
            else odd++;
        }
        int a = min(ev,odd);
        int b = max(ev,odd);

        cout << min(2*a+1,a+b) << endl;
    }
}