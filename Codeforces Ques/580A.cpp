#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    int c=1;
    int max1=INT_MIN;
    for(int i=0; i<n-1; i++)
    {
        if (v[i+1]>=v[i])
        {
            c++;
        }
        else
        {
            c=1;
        }
        max1 = max(max1,c);
    }
    cout << max1 << endl;
    return 0; 
}