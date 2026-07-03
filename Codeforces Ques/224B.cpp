#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin >> p[i];

    unordered_map<int,int> mpp;
    int l = 0;
    int ansl = -2;
    int ansr = -2;
    for(int r = 0; r<n; r++)
    {
        mpp[p[r]]++;
        if (mpp.size()==k)
        {
            ansr = r;
            ansl = l;
            while(l<=r-k)
            {
                mpp[p[l]]--;
                if (mpp[p[l]]==0) mpp.erase(p[l]);
                if (mpp.size()<k)
                {
                    break;
                }
                ansl++;
                l++;
            }
            break;
        }
    }
    cout << ansl + 1 << " " << ansr+1 << endl;
}