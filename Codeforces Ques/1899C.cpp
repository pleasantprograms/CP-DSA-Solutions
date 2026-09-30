#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];

        ll ans = LLONG_MIN;
        ll i=0, j=0;
        ll sum = 0;
        while(j<n)
        {
            if (sum<0)
            {
                sum = 0;
                i = j;
            }

            if (i<j)
            {
                if (abs(nums[j])%2!=abs(nums[j-1])%2)
                {
                    sum+=nums[j];
                }
                else
                {
                    sum=nums[j];
                    i=j;
                }
            }
            else
            {
                sum = nums[j];
            }
            ans = max(ans,sum);
            j++;
        }
        cout << ans << endl;
    }
}