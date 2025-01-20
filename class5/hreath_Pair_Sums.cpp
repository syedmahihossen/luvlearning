#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int arr[N];
bool check(int n, int k)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == k)
        {
            return true;
        }
        else if (sum < k)
        {
            left++;
        }
        else
            right--;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (check(n, k))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}