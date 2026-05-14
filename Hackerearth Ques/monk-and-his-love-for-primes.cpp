#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	for (int i=2; i<n; i++)
	{
		if (n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s;
	cin >> s;
	int ans = 0;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i]>=65 && s[i]<=90)
		{
			s[i]+=32;
			ans-=s[i];
		}

		else
		{
			s[i]-=32;
			ans+=s[i];
		}
	}
    cout << isPrime(abs(ans)) << endl;
}