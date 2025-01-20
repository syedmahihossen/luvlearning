#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> v = {{'(', -1}, {'[', -2}, {'{', -3}, {')', 1}, {']', 2}, {'}', 3}};
string isBalanced(string s)
{
    stack<char> st;
    for (auto &c : s)
    {
        if (v[c] < 0)
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            if (v[c] + v[top] != 0)
                return "NO";
            st.pop();
        }
    }
    if (st.empty())
        return "YES";
    else
        return "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << "\n";
    }
}