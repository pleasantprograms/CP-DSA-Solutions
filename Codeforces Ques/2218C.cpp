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
        vector<int> p(3*n);
        for(int i=0; i<p.size(); i+=3)
        {
            p[i]=(i/3)+1;
        }
        for(int i=0; i<p.size(); i++)
        {
            if (i%3!=0)
            {
                p[i] = (p.size()/3)+i-(i/3);
            }
        }
        int ans=0;
        for(int i=0; i<p.size(); i++)
        {
            cout << p[i] << " " ;
        }
        cout << endl;
    }
}
