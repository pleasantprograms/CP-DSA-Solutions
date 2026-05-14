#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int ans=0;
        int n;
        cin>>n;
        
        int arr[n];

        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(int i=0; i<=n; i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==i)
                {
                    count++;
                }
            }

            if(count>i)
            {
                ans=ans+count-i;
            }
            else if (count<i)
            {
                ans=ans+count;
            }
        }
        cout << ans << endl;
    }
}