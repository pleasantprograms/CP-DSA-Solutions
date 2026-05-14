#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    double p = 100;
    for (int i=1;i<=n;i++)
    {
        double x;
        cin >> x;
        
        sum += x;
    }
    double total = p * n ;
    
    cout << (sum/total)*(100.000000);
}