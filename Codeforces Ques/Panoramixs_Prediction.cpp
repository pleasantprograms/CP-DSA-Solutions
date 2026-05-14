#include <iostream>
using namespace std;

bool isPrime(int x)
{
    for (int i=2; i<x; i++)
    {
        if (x%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m ;
    int i=n+1;

    if (isPrime(m)==1)
    {
        while(i<=m)
        {
            if (isPrime(i)==0)
            {
                i++;
            }
            else if (isPrime(i)==1 && i==m)
            {
                cout << "YES" << endl;
                return 0;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

