#include <bits/stdc++.h>
using namespace std;
int mex(int a, int b, vector<int> nums)
{
    int j=0;
    for(int i=a; i<=b; i++)
    {
        if (j<nums[i])
        {
            return j;
        }
        else if (j==nums[i])
        {
            j++;
        }
        else
        {
            continue;
        }
    }
    return j;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        int a=0;
        for(int i=0; i<n-1; i++)
        {
            if (mex(0, i, nums)==mex(i+1,n-1,nums))
            {
                cout << "NO" << endl;
                a=1;
                break;
            }
        }
        if (a==0)
        {
            cout << "YES" << endl;
        }
    }
}