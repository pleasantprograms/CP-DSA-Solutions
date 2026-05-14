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
        int arr[n][n];
        int ans[n*2];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> arr[i][j];
                ans[i+j+1]=arr[i][j];
            }
        }
        bool k = false;
        for(int i=1; i<=2*n; i++)
        {
            for (int j=0; j<2*n; j++)
            {
                if (ans[j]==i)
                {
                    k = true;
                    break;
                }
            }
            if (k==false)
            {
                ans[0] = i;
            }
            else
            {
                k = false;
            }
        }

        for(int i=0; i<2*n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}