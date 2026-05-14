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
        sort(p.begin(),p.end());
        int c=1;
        bool k = false;
        for(int i=0; i<n-1; i++)
        {
            if (p[i]==p[i+1] && p[i]!=m)
            {
                c++;
            }
            else
            {
                c=1;
            }
            
            if (c>=2)
            {
                cout << "No" << endl;
                k=true;
            }
        }
        if (k==false)
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
