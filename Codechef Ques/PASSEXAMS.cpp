#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y, z;
	    cin >> x >> y >> z;
	    int c=0;
	    if (x>=50)
	    {
	        c++;
	    }
	    if (y>=50)
	    {
	        c++;
	    }
	    if (z>=50)
	    {
	        c++;
	    }
	    if (c>=2)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}

}
