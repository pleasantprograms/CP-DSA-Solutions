#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k = log2(n-1);
        int a = pow(2,k);

        vector<int> ans;
        for(int i=a-1; i>=0; i--)
        {
            ans.push_back(i);
        }
        for(int i=a; i<n; i++)
        {
            ans.push_back(i);
        }

        for(int i=0; i<n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}