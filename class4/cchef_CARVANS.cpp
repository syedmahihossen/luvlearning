#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countt = 0, minn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= minn)
            {
                countt++;
                minn = arr[i];
            }
        }
        cout << countt << "\n";
    }
}