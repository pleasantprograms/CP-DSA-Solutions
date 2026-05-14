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
        vector<int> p(n);
        for(int i=0; i<n; i++)
        {
            cin >> p[i];
        }
        sort(p.begin(),p.end());
        int c=1;
        int temp=p[0];
        for(int i=0; i<n; i++)
        {
            if (p[i]!=temp)
            {
                temp=p[i];
                c++;
            }
        }
        cout << c << endl;
    }
}