#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    set<string> ms;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        ms.insert(a);
    }
    for (auto &it : ms)
    {
        cout << it << "\n";
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