#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N][26];
int prefix[N][26];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            arr[i + 1][s[i] - 'a']++;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                prefix[i][j] = prefix[i - 1][j] + arr[i][j];
            }
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            long long odd_count = 0;
            for (int i = 0; i < 26; i++)
            {
                int char_count = prefix[r][i] - prefix[l - 1][i];
                if (char_count % 2 != 0)
                {
                    odd_count++;
                }
            }
            if (odd_count > 1)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "Yes" << "\n";
            }
        }
    }
}