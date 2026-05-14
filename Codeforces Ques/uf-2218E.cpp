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
        vector<int> p(n);
        for(int i=0; i<n; i++) cin >> p[i];
        sort(p.begin(),p.end());
        for(int i=0; i<n; i++)
        {
            for(int j=0; i<n; i++)
            {
                if (i!=j) p[i] = p[i] ^ p[j]; 
            }
        }
        sort(p.begin(),p.end());
        for(int i=0; i<n; i++)
        {
            cout << p[i] << " " ;
        }
        cout << p[n-1] << endl;
    }
}