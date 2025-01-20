#include <bits/stdc++.h>
using namespace std;

void vectorprint(vector<int> &arr) // copy O(n) avoid copy use &
{
    cout << "vector size " << arr.size() << "\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    arr.pop_back();
    vector<int> arr2(3);
    vectorprint(arr);
    vectorprint(arr2);
    vector<int> &k = arr;
    vectorprint(k);
}