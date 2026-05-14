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
        string a;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            a.push_back(x);
        }
        int p = n;
        int st=0;
        int end=n-1;

        while(st<=end)
        {
            if (a[st]=='0' && a[end]=='1')
            {
                p-=2;
            }
            else if (a[st]=='1' && a[end]=='0')
            {
                p-=2;
            }
            else
            {
                break;
            }
            st++;
            end--;
        }
        cout << p << endl;
    }
}