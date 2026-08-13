#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans(n,-1);
    for(int i=0; i<n; i++) cin >> arr[i];
    stack<int> s;
    for(int i=0; i<n; i++)
    {
        int j = i-1;
        while(!s.empty())
        {
            if (arr[i]>s.top())
            {
                ans[j] = arr[i];
                s.pop();
                j--;
            }
            else break;
        }
        s.push(arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " " << ans[i] << endl;
    }
}