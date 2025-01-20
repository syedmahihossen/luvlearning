#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string num;
    cin >> num;
    int last_degit = num[num.size() - 1] - '0';
    cout << last_degit;
}