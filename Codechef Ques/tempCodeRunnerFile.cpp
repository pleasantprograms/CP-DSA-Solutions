#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m=INT_MIN;
        vector<int> p(n);
        for(int i=0; i<n; i++)
        {
            cin >> p[i];
            m = max(m,p[i]);
        }
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++)
        {
            mpp[m-p[i]]++;
        }
        bool k = false;
        for(auto pair : mpp)
        {
            if (pair.second>=2 && pair.first!=0)
            {
                cout << "NO" << endl;
                k=true;
            }
        }
        if(k==0)
        {
            cout << "YES" << endl;
        }

    }
}
