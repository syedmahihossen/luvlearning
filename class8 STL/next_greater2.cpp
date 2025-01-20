#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    int N = v.size();
    vector<int> nge(N, -1);
    stack<int> st;
    for (int i = 0; i < 2 * N; i++)
    {
        while (!st.empty() && v[i % N] > v[st.top()])
        {
            nge[st.top()] = v[i % N];
            st.pop();
        }
        if (i < N)
        {
            st.push(i);
        }
    }
    return nge;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    vector<int> final = NGE(v);
    for (auto &it : final)
    {
        cout << it << "\n";
    }
}
