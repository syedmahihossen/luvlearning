#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    long long total_candy = 0;
    multiset<long long> m;
    while (n--)
    {
        long long candy;
        cin >> candy;
        m.insert(candy);
    }
    while (k--)
    {
        auto it = --(m.end());
        total_candy += *it;
        m.erase(it);
        m.insert(*it / 2);
    }
    cout << total_candy << "\n";
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