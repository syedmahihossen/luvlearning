#include <bits/stdc++.h>
using namespace std;
int dp[301][5002];
int func(int index, int amount, vector<int> &coins)
{
    if (amount == 0)
        return 1;
    if (index < 0)
        return 0;
    if (dp[index][amount] != -1)
        return dp[index][amount];
    int ways = 0;
    for (int coin=0;coin<=amount;coin+=coins[index])
    {
        if (amount - coin >= 0)
            ways += func(index - 1, amount - coin, coins);
    }
    return dp[index][amount] = ways;
}
int change(int amount, vector<int> &coins)
{
    memset(dp, -1, sizeof(dp));

    return func(coins.size() - 1, amount, coins);
}
int main()
{
    int n, amount;
    cin >> n >> amount;
    vector<int> coins(n);
    for (auto &it : coins)
        cin >> it;
    cout << change(amount, coins) << endl;
}