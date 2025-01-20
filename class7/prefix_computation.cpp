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
        int n, q;
        cin >> n >> q;
        int arr[n+10];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int forward[n+10];
        int backword[n+10];
        forward[0] = backword[n + 1] = 0;
        for (int i = 1; i < n; i++)
        {
            forward[i] = __gcd(arr[i], forward[i - 1]);
        }
        for (int i = n; i >= 1; i--)
        {
            backword[i] = __gcd(arr[i], backword[i + 1]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(backword[r+1], forward[l-1]) << "\n";
        }
    }
}