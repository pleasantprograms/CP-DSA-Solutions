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
        vector<int> a, al, ar;
        int maxel = 0;
        int count = 0;

        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            maxel = max(maxel,x);
        }

        while (a[n-1]!=maxel)
        {
            for (int i=0; i<n; i++)
            {
                if (a[i]<=a[n-1])
                {
                    al.push_back(a[i]);
                }
                else
                {
                    ar.push_back(a[i]);
                }
            }
            for (int i=0; i<al.size(); i++)
            {
                a[i]=al[i];
            }
            for (int i=0; i<ar.size(); i++)
            {
                a[i+al.size()]=ar[i];
            }
            count++;
        }
        cout << count << endl;
    }
}