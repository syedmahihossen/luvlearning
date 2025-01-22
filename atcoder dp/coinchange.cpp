#include <bits/stdc++.h>
using namespace std;
int dp[100000];
int func(vector<int> &v, int amount)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    for (auto &coin : v)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(v, amount - coin) + 1LL);
    }
    return dp[amount] = ans;
}
int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(coins, amount);
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    int amount;
    cin >> amount;
    cout << coinChange(v, amount) << endl;
}