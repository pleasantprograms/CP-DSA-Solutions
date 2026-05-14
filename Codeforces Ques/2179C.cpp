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
        vector<int> b;
        int min1=INT_MAX;
 
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            min1 = min(min1,x);
        }
        
        int min2 = INT_MAX;
        
        for (int i=0; i<n; i++)
        {
            if (b[i]!=min1)
            {
                min2 = min(min2,b[i]);
            }
        }
        
        cout << max(min1, min2-min1) << endl;
    }
}