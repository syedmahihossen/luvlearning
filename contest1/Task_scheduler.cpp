#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {

        int k;
        cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        mp[k].push_back(i);
    }
    for (auto &it : mp)
    {
        for (auto itt : it.second)
        {
            cout << v[itt] << " ";
        }
    }
    cout << "\n";
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