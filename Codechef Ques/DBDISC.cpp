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
	    vector<int> a(n);
	    vector<int> b(n);
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin >> b[i];
	    }
	    int ans = 0;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            int p = max(a[i],a[j]);
	            int temp = p;
	            if (p/2 > (p-100))
	            {
	                p=p/2;
	            }
	            else
	            {
	                p-=100;
	            }
	            if (temp==a[i])
	            {
	                if (a[j]+p<=k)
	                {
	                    ans = max(ans,b[j]+b[i]);
	                }
	            }
	            else
	            {
	               if (a[i]+p<=k)
	                {
	                    ans = max(ans,b[i]+b[j]);
	                }
	            }
	        }
	    }
	    cout << ans << endl;   
    }
}
