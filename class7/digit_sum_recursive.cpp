#include <bits/stdc++.h>
using namespace std;
string s;
int digit_sum(int size)
{

    int last = s[size] - '0';
    if (size < 0)
    {
        return 0;
    }

    return digit_sum(size - 1) + last;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> s >> n;
    int size = s.size() - 1;
    cout << digit_sum(size) << "\n";
}