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
        int count=0;
        int c=0;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if (x==2)
            {
                count++;
            }
        }
        if (count==0)
        {
            cout << 1 << endl;
        }
        else if (count%2!=0)
        {
            cout << -1 << endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if (a[i]==2)
                {
                    c++;
                    if (c==count/2)
                    {
                        cout << i+1 << endl;
                        break;
                    }
                }
            }
        }
    }
}