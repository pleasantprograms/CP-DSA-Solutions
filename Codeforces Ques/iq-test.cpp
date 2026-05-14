#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0]%2==0 && arr[1]%2==0) //first and second even
    {
        for (int i=2; i<n; i++) //check from third
        {
            if (arr[i]%2!=0) //return odd index
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    else if (arr[0]%2!=0 && arr[1]%2!=0) //opp of first
    {
        for (int i=2; i<n; i++)
        {
            if (arr[i]%2==0)
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    else if (arr[0]%2!=0 && arr[1]%2==0) //first odd, second even
    {
        if (arr[2]%2==0) //third even - return first
        {
            cout << 1 << endl;
        }
        else //third odd - return second
        {
            cout << 2 << endl;
        }
    }
    else //opp of above
    {
        if (arr[2]%2==0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}