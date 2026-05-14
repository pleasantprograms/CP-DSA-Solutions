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
        vector<int> p;
        int c=0;
        int m=INT_MIN;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
            m=max(m,x);
        }
        for (int i=0; i<n; i++)
        {
            if (p[i]==m)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}