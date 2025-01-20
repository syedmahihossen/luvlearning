#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input: n (size of array) and m (modulo value)
    long long n, m;
    cin >> n >> m;

    // Read array elements
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Precompute modulo values of the array
    vector<long long> mod_values(n);
    for (long long i = 0; i < n; i++) {
        mod_values[i] = v[i] % m;
    }

    // Input: Number of queries
    int q;
    cin >> q;

    // Process each query
    while (q--) {
        long long x;
        cin >> x;

        // Find the maximum value of (mod_values[i] + x) % m
        long long maximum = 0;
        for (long long i = 0; i < n; i++) {
            maximum = max(maximum, (mod_values[i] + x) % m);
        }

        // Output the result for this query
        cout << maximum << "\n";
    }

    return 0;
}
