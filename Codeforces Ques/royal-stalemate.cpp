#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
 
   for (int i=0; i<n; i++) //1 4 6 2 1 
   {
        long long p=0; //even index
        long long q=0; //odd index

        for (int j=i; j<n; j++)
        {
            if (j%2==0)
            {
                p+=arr[j];
            }
            else
            {
                q+=arr[j];
            }

            if (p==q)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
   }
   cout << "NO" << endl;
   return 0;
}