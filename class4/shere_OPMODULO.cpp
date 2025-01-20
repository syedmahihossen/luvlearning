#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long L, R;
    cin >> L >> R;

    long long sum = 0;
    const long long MOD = 1000000007;

  
    long long power = 1;
    while (power < L) {
        power *= 2;
    }


    while (power <= R) {
        sum = (sum + power) % MOD;
        power *= 2;
    }

    cout << sum << "\n";
    return 0;
}
