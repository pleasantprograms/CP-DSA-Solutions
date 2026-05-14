#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        vector<int> ans;
        for(int i=1; i<=1667; i++)
        {
            if (i%3!=0 && i%10!=3)
            {
                ans.push_back(i);
            }
        }
        cout << ans[k-1] << endl;
    }
}