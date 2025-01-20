#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int stu_id[n], stu_mark[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu_id[i] >> stu_mark[i];
    }

    sort(stu_mark, stu_mark + n);// buid in sort
    int sum = stu_mark[0] + stu_mark[1] + stu_mark[2];
    if (sum >= 150)
    {
        cout << "Counseling Support Not Required" << "\n";
        cout << stu_mark[0] << " " << stu_mark[1] << " " << stu_mark[2] << "\n";
    }
    else
        cout << "Counseling Support Required" << "\n";
}