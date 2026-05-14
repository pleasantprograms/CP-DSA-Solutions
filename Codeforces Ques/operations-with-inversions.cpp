#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int count=0;
        vector<int> v;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x ;
            v.push_back(x);
        }
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (v[i]>v[j])
                {
                    v[j]=0;
                }
            }
        }
        for (int i=0; i<n;i++)
        {
            if (v[i]==0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}