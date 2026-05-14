#include <iostream>
using namespace std;

int main()
{
    int x=0;
    int testcases;
    cin >> testcases;

    for (int i=1; i<=testcases; i++)
    {
        int noofteams;
        cin >> noofteams;

        for (int j=1; j<noofteams; j++)
        {
            int efficiency;
            cin >> efficiency;
            x = x+efficiency;
        }
    }
    return 0;
    
}