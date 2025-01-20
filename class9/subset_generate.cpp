#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> final;
void generate(vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        final.push_back(subset);
        return;
    }
    generate(subset, i + 1, nums);
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> nums;
    vector<int> subset;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        nums.push_back(k);
    }
    generate(subset, 0, nums);
    for (auto &it : final)
    {

        for (auto &iit : it)
        {
            cout << iit << " ";
        }
        cout << "\n";
    }
}