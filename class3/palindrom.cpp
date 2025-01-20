#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // for (int i = s.size() - 1; i >= 0; i--)
    // {
    //     rev.push_back(s[i]);
    // }
    string s;
    cin >> s;
    string rev;
    rev = s;
    reverse(rev.begin(), rev.end());
    if (rev == s)
    {
        cout << "yes" << "\n";
    }
    else
    {
        cout << "no" << "\n";
    }
}