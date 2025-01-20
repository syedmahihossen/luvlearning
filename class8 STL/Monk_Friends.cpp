#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, m;
    cin >> n >> m;
    unordered_set<long long> ms;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        ms.insert(a);
    }
    for (int i = 0; i < m; i++)
    {
        long long a;
        cin >> a;
        auto k = ms.find(a);
        if (k != ms.end())
            cout << "YES" << "\n";
        else
        {
            cout << "NO" << "\n";
            ms.insert(a);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}