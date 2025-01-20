#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int result = 0, power2 = 1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int binary_digit = s[i] - '0';
            result += (binary_digit * power2);
            power2 *= 2;
        }
        cout << result << "\n";
    }
}
