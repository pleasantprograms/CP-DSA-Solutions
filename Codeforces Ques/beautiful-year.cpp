#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int n)
{
        int x=n%10;
        int y=(n/10)%10;
        int z=(n/100)%10;
        int w=(n/1000)%10;

        int arr[4]={w,z,y,x};

        for (int a=0; a<4; a++)
        {
            for (int b=a+1; b<4; b++)
            {
                if (arr[a]==arr[b])
                {
                    return false;
                }
            }
        }
        return true;
}
int main()
{
    int year;
    cin >> year;

    int i=year+1;

    while(i<=10000)
    {
        if (isDistinct(i)==0)
        {
            i++;
        }
        else
        {
            cout << i << endl;
            return 0;
        }
    }
}