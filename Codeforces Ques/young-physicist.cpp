#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n ;

    int xf=0;
    int yf=0;
    int zf=0;

    while(n--)
    {
        int xi, yi, zi ;
        cin >> xi >> yi >> zi ;

        xf=xf+xi;
        yf=yf+yi;
        zf=zf+zi;
    }

    if (xf==0 && yf==0 && zf==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}