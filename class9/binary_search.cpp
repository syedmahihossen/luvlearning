#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int low = 0, hi = n - 1, mid;
    int key;
    cin >> key;
    while (hi - low > 1)
    {
        mid = low + (hi - low) / 2;
        if (v[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[hi] == key)
    {
        cout << hi << "\n";
    }
    else if (v[low] == key)
    {
        cout << low << "\n";
    }
    else
    {
        cout << "Not Found" << "\n";
    }
}