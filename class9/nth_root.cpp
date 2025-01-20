// square root or n th root of a number using binary search

#include <bits/stdc++.h>
using namespace std;
double eps = 1e-7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    double x;
    cin >> x;
    double hi = x, lo = 1;
    while (hi - lo > eps)
    {
        double mid = lo + (hi - lo) / 2;
        if (mid * mid < x)
        {
            lo = mid;
        }
        else
            hi = mid;
    }
    cout << setprecision(10) << hi << " " << lo << endl;
    cout << pow(x, 1.0 / 2) << endl;
}