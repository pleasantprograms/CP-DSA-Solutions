#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string ans;
        int rc = r/(b+1);
        int left = r%(b+1);
        for(int i=1; i<=b+1; i++)
        {
            for(int i=1; i<=rc; i++)
            {
                ans.push_back('R');
            }
            if (left>0)
            {
                ans.push_back('R');
                left--;
            }
            if (i!=b+1) ans.push_back('B');
        } 
        cout << ans << endl;
    }
}