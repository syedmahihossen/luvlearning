#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, multiset<string>> marks;
    for (int i = 0; i < n; i++)
    {
        int p;
        string s;
        cin >> s >> p;
        marks[-p].insert(s);
    }
    for (auto &it : marks)
    {
        for (auto &stu : it.second)
            cout << stu << " " << -it.first << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     vector<pair<int, string>> students;

//     // Read input
//     for (int i = 0; i < n; i++) {
//         string name;
//         int marks;
//         cin >> name >> marks;
//         students.push_back({-marks, name});  // Store negative marks
//     }

//     // Sort by marks in descending order and by name lexicographically
//     sort(students.begin(), students.end());

//     // Print the sorted list
//     for (const auto &student : students) {
//         cout << student.second << " " << -student.first << "\n";  // Negate marks to print original value
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     solve();
//     return 0;
// }
