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
        int num = -1;
        int st=0;
        int end =0;
        int c1=0;
        int c2=0;
        vector<int> p;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
            if (x!=n-i && c1==0)
            {
                num=n-i;
                st=i;
                c1=1;
            }
            if (x==num && c2==0)
            {
                end=i;
                c2=1;
            }
        }
        if (n==1 && p[0]==1)
        {
            cout << p[0] << endl;
        }
        else
        {
            while(st<=end)
            {
                swap(p[st],p[end]);
                st++;
                end--;
            }
            for (int i=0; i<n; i++)
            {
                cout << p[i] << " " ;
            }
            cout << endl;
        }
    }
}