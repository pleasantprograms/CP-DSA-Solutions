#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int ra, xa, ya ;
        int rb, xb, yb ;
        cin >> ra >> xa >> ya ;
        cin >> rb >> xb >> yb ;

        int n;
        cin >> n;

        int ta=0;
        int tb=0;

        int rasq = pow(ra,2);
        int rbsq = pow(rb,2);

        while (n--)
        {
            int x, y;
            cin >> x >> y ;

            int dasq = pow((x-xa),2)+pow((y-ya),2);
            int dbsq = pow((x-xb),2)+pow((y-yb),2);

            if (dasq<=rasq)
            {
                ta++;
            }
            if (dbsq<=rbsq)
            {
                tb++;
            }
        }
        if (ta>tb)
        {
            cout << "TOWER A" << endl;
        }
        else if (tb>ta)
        {
            cout << "TOWER B" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
}