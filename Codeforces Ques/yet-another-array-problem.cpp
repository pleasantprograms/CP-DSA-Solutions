#include <bits/stdc++.h>
using namespace std;

int findGCD (long long int arr[],int n)
{
    for (long long int x=2; x<1e18; x++)
    {
        for (int i=0; i<n; i++)
        {
            if (gcd(arr[i],x)==1)
            {
                return x;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        cout << findGCD(arr,n) << endl;
    }
}