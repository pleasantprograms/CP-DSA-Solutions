#include <iostream>
using namespace std;

int main()
{
    int x;
    int p=0;
    int q=0;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cin >> x;
            if (x==1)
            {
                p = i-3;
                q = j-3;

                if (p<0)
                {
                    p=-p;
                }

                if (q<0)
                {
                    q=-q;
                }
            }
        }
    }
    cout << p+q << endl;
    return 0;
}