#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a;
        vector<int> idx;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> temp = a;
        for(int i=1; i<=m; i++)
        {
            int b, c;
            cin >> b >> c;
            a[b-1]+=c;
            idx.push_back(b-1);
            if (a[b-1]>h)
            {
                for(int i=0; i<idx.size(); i++)
                {
                    a[idx[i]]=temp[idx[i]];
                }
                idx.erase(idx.begin(),idx.end());
            }
        }
        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}