#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        int count=0;
        vector<long long int> v;
        for (long long int i=10; i<=n; i*=10)
        {
            if (n%(i+1)==0)
            {
                count++;
                v.push_back(n/(i+1));
            }
        }
        cout << count << endl;
        
        if (count>0)
        {
            for (int i=v.size()-1; i>=0; i--)
            {
                cout << v[i] << " " ;
            }
            cout << endl ;
        }
    }
}