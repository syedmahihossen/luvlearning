#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second == b.second)
        return a.first< b.first;
    return a.second > b.second;
}
void solve()
{
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        string s;
        cin >> s >> k;
        v.push_back({s, k});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto &it : v)
        cout << it.first << " " << it.second << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}