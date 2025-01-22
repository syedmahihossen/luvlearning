#include <bits/stdc++.h>
using namespace std;
const int N = 25e2 + 10;
vector<int> v(N);
int dp[N];
int lis(int i)
{
    if (dp[i] != -1)
        return dp[i];
    int ans = 1;
    for (int j = 0; j < i; j++)
    {
        if (v[i] > v[j])
        {
            ans = max(ans, lis(j) + 1);
        }
    }
    return dp[i] = ans;
}
int main()
{
    memset(dp, -1, sizeof(dp)); 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(v[i]));
    }
    cout << ans << endl;
}