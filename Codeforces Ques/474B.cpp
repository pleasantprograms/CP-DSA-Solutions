#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int no = 0;
    vector<int> moles;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        no+=x;
        moles.push_back(no);
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n-1; //2 9 12 16 25
        int temp = -1;
        int ans = INT_MAX;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if (x<=moles[mid])
            {
                r = mid-1;
                ans = min(ans,mid+1);
            }
            else if (x>moles[mid])
            {
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}