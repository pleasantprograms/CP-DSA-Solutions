#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; //n=no of participants, k=greater than equal to score req
    cin >> n >> k ;

    int arr[50];
    int next = 0;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    for (int i=0; i<n; i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k-1])
        {
            next++;
        }
    }
    cout << next << endl;
}