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
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }
        int a, b, c;
        bool u = false; bool v = false;
        for(int i=1; i<n; i++)
        {
            a=0; b=0; c=0;
            u = false; v = false;
            for(int j=i-1; j>=0; j--)
            {
                if (p[j]<p[i])
                {
                    a = j+1;
                    u = true;
                    break;
                }
            }
            for(int k=i+1; k<n; k++)
            {
                if (p[k]<p[i])
                {
                    c = k+1;
                    v = true;
                    break;
                }
            }
            if (u==true && v==true)
            {
                b = i+1;
                break;
            }
        }
        if (u==true && v==true)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}