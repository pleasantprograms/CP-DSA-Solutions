#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int max1 = INT_MIN;
    int min1 = INT_MAX;

    for (int i=0; i<n; i++)
    {
        max1 = max(max1,arr[i]);
        min1 = min(min1,arr[i]);
    }

    int maxid = -1;
    for (int i=0; i<n; i++)
    {
        if (arr[i]==max1)
        {
            maxid = i;
            break;
        }
    }
    int count = 0;
    while (maxid!=0)
    {
        swap(arr[maxid],arr[maxid-1]);
        count++;
        maxid--;
    }
    int minid = -1;
    for (int i=0; i<n; i++)
    {
        if (arr[i]==min1)
        {
            minid = i;
        }
    }

    while(minid!=n-1)
    {
        swap(arr[minid],arr[minid+1]);
        count++;
        minid++;

    }
    cout << count << endl;
}