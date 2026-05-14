#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int cl=0;

    while (n>0)
    {
        int digit = n%10;

        if (digit==4 || digit==7)
        {
            cl++;
        }
        
        n = n/10;
    }
    
    if (cl==0)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    while (cl>0)
    {
        int digit = cl%10;

        if (digit!=4 && digit!=7)
        {
            cout << "NO" << endl;
            return 0;
        }
        
        cl = cl/10;
    }
    cout << "YES" << endl;
    return 0;
}