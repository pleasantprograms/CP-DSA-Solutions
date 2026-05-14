#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        int c=0;
        bool a=0;
        cin >> n >> k;
        vector<int> p;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }
        vector<int> q = p;
        sort(q.begin(),q.end());
        if (k==1)
        {
            for(int i=0; i<n; i++)
            {
                if (p[i]!=q[i])
                {
                    cout << "NO" << endl;
                    a=1;
                    break;
                }
            }
            if (!a)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}