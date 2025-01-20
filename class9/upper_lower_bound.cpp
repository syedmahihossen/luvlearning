#include <bits/stdc++.h>
using namespace std;
int upper_bound(vector<int> &v, int element)
{
    int lo = 0, hi = v.size() - 1;
    while (hi - lo > 1)
    {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] <= element)
        {
            lo = mid + 1;
        }
        else
            hi = mid;
    }
    if (v[lo] > element)
    {
        return lo;
    }
    else if (v[hi] > element)
    {
        return hi;
    }
    else
        return -1;
}
int lower_bound(vector<int> &v, int element)
{
    int lo = 0, hi = v.size() - 1;

    while (hi - lo > 1)
    {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
            hi = mid;
    }
    if (v[lo] >= element)
    {
        return lo;
    }
    else if (v[hi] >= element)
    {
        return hi;
    }
    else
        return -1;
}
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
    int element;
    cin >> element;
    int lower_bnd = lower_bound(v, element);
    cout << lower_bnd << " " << (lower_bnd != -1 ? v[lower_bnd] : -1) << "\n";

    int upper_bnd = upper_bound(v, element);
    cout << upper_bnd << " " << (upper_bnd != -1 ? v[upper_bnd] : -1) << "\n";
}