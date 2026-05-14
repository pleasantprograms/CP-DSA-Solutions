#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[4];
        for(int i=0; i<4; i++)
        {
            cin >> arr[i];
        }
        int p = max(arr[0],max(arr[1],max(arr[2],arr[3])));
        int q = INT_MIN;
        for(int i=0; i<4; i++)
        {
            if (arr[i]>q && arr[i]!=p)
            {
                q=arr[i];
            }
        }

        if (p==arr[0] && q==arr[1])
        {
            cout << "NO" << endl;
        }
        else if (p==arr[1] && q==arr[0])
        {
            cout << "NO" << endl;
        }
        else if (p==arr[2] && q==arr[3])
        {
            cout << "NO" << endl;
        }
        else if (p==arr[3] && q==arr[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        
    }
    return 0;
}