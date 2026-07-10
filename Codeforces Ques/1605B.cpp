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
        string s;
        cin >> s;
        int l = 0, r = n-1;
        if (is_sorted(s.begin(),s.end())) cout << 0 << endl;
        else
        {
            vector<int> ans;
            while(l<r)
            {
                while(l<n && s[l]=='0') l++;
                while(r>=0 && s[r]=='1') r--;
                if (l<r)
                {
                    ans.push_back(l+1);
                    ans.push_back(r+1);

                    l++;
                    r--;
                }
            }
            sort(ans.begin(),ans.end());
            cout << 1 << endl;
            cout << ans.size() << " ";
            for(int i=0; i<ans.size(); i++)
            {
                cout << ans[i] << " " ;
            }
            cout << endl;
        }
    }
}