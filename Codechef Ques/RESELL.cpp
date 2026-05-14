#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    vector<int> p(n);
	    for(int i=0; i<n; i++)
	    {
	        cin >> p[i];
	    }
	    int ans=0;
	    sort(p.begin(),p.end(),greater<int>());
	    for(int i=0; i<k ; i++)
	    {
	        if (p[i]>=5)
	        {
	            ans+=(p[i]-5);
	        }
	    }
	    for(int i=k; i<n; i++)
	    {
	        if (p[i]>=10)
	        {
	            ans+=(p[i]-10);
	        }
	    }
        cout << ans << endl;
	}
}
