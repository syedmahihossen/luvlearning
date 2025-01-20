#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    string rev;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        rev.push_back(s[i]);
    }
    
    cout << rev << "\n";
}