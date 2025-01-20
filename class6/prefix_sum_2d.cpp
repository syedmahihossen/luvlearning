/*
Given 2d array a of N*N integers. Given Q queries and in each
query given a,b,c and d print sum of square represented by (a,b) as
top left point and (c,d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
long long prefix_sum[N][N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Read the array and construct the 2D prefix sum
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            // Build the 2D prefix sum array
            prefix_sum[i][j] = arr[i][j] + prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1];
        }
    }

    // Asume that for 2d array (3,2)+(2,3)-(2,2)+arr[n][n]

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Calculate the sum of the submatrix from (a, b) to (c, d)
        long long result = prefix_sum[c][d] - prefix_sum[a - 1][d] - prefix_sum[c][b - 1] + prefix_sum[a - 1][b - 1];

        cout << result << "\n";
    }
    // long long sum = 0;
    //  for (int i = a; i <= c; i++)
    //  {
    //      for (int j = b; j <= d; j++)         //compleixity O(n^2) so not run in 1 sec (0<10^7)
    //      {
    //          sum += arr[i][j];
    //      }
    //  }
    //  cout << sum << "\n";
}
/*
input
3
3 6 2
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3

output
26
24

*/