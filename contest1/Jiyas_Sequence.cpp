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
        int n, k, sum = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            sum = (sum * k) % 10;
        }

        if (sum == 2 || sum == 3 || sum == 5)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}