#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        ans.push_back(1);
        for(int i=1; i<10000; i++)
        {
            ans.push_back((2*(i-1)+1)*(2*i+1)*1LL);
        }
        for(int i=0; i<n; i++)
        {
            cout << ans[i] << " " ;
        }
        cout << endl;
    }
}