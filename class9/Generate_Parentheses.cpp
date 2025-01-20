#include <bits/stdc++.h>
using namespace std;
vector<string> final;
void generate(string &s, int open, int close)
{
    // cout << s << "\n";
    if (open == 0 && close == 0)
    {
        final.push_back(s);
        return;
    }

    if (open > 0)
    {
        s.push_back('(');
        generate(s, open - 1, close);
        s.pop_back();
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            generate(s, open, close - 1);
            s.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    generate(s, n, n);
    for (auto it : final)
    {
        cout << it << "\n";
    }
}