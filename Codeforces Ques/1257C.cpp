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
        unordered_map<int,int> mpp;
        int l = 0;
        int r = 1;
        mpp[p[l]]++;
        int maxfreq=1;
        int minl = INT_MAX;
        bool ans = false;
        while(r<n)
        {
            mpp[p[r]]++;
            maxfreq = mpp[p[r]];
            if (maxfreq==2)
            {
                ans = true;
                int length = r-l+1;
                minl = min(minl,length);
                mpp[p[l]]--;
                if (mpp[p[l]]==0) mpp.erase(p[l]);
                l++;
                mpp[p[r]]--;
            }
            else
            {
                r++;
            }

        }
        if (ans==true) cout << minl << endl;
        else cout << -1 << endl;
    }
}