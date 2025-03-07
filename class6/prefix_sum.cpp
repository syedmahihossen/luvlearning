/*
Given array a of N integers. Given Q queries and
in each query given L and R print sum of array elements
from index L to R(L, R included)

Constraints
1 <= N<= 10^5
1<= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
long long prefix_sum[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        cout << prefix_sum[r] - prefix_sum[l - 1] << "\n"; // now compexity O(n)

        // for (int i = l; i <= r; i++)
        // {                                //in this case complexity O(n^2)
        //     sum += arr[i];
        // }                                // Optimize using pre computation tecnique / prefix sum
        // cout << sum << "\n";
    }
}

/*
intput
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6

output
8
19
28
21
*/