#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];
    int l = 0;
    int ansl = -2;
    int ansr = -2;
    int r = 0;
    int maxl = 0;
    unordered_map<int,int> mpp;
    while(r<n && l<n)
    {
        mpp[p[r]]++;
        if (mpp.size()<=k)
        {
            int diff = r-l+1;
            maxl = max(maxl,diff);
            if (maxl == diff)
            {
                ansl = l;
                ansr = r;
            }
            r++;
        }
        else
        {
            mpp[p[l]]--;
            if (mpp[p[l]]==0) mpp.erase(p[l]);
            l++;
            mpp[p[r]]--;
        }
    }
    cout << ansl+1 << " " << ansr+1 << endl;
}