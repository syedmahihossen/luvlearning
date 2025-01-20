#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
long long n, m, trees[N];
bool iswoodsufficient(int h)
{
    long long wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] >= h)
        {
            wood += (trees[i] - h);
        }
    }
    return wood >= m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }
    long long hi = 1e9, lo = 0, mid;
    while (hi - lo > 1)
    {
        mid = lo + (hi - lo) / 2;
        if (iswoodsufficient(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (iswoodsufficient(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }
}