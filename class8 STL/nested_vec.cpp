#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}

void solve()
{
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    print(v);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int X, Y;
        cin >> X >> Y;
        v.push_back({X, Y});
    }
    print(v);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}