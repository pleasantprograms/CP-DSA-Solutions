#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<int> v;
    for(int i=1; i<=12; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(k==0)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(v.begin(),v.end(),greater<int>());
    int sum=0;
    int count=0;

    for(int i=0; i<12; i++)
    {
        sum+=v[i];
        count++;
        if (sum>=k)
        {
            cout << count << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}