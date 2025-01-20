#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp[1] = {"sdg"};
    mp.insert({4, "adfas"});
    for (auto &pr : mp)
    {
        cout << pr.first << " " << pr.second << "\n";
    }
}