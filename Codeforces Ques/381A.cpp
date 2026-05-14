#include <bits/stdc++.h>
using namespace std;

int main()
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
    int st=0;
    int end=n-1;
    int sereja=0;
    int dima=0;
    for(int i=1; i<=n; i++)
    {
        int a = max(p[st],p[end]);
        if (i%2!=0)
        {
            sereja+=a;
            if (a==p[st])
            {
                st++;
            }
            else
            {
                end--;
            }
        }
        else
        {
            dima+=a;
            if (a==p[st])
            {
                st++;
            }
            else
            {
                end--;
            }
        }
    }
    cout << sereja << " " << dima << endl;
}