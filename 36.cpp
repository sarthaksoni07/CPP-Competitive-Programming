#include <bits/stdc++.h>
using namespace std;

// void solution() {
//     string s; cin >> s;
//     int n = s.size();
//     int arr[26] = {0}; // initializes whole array with zero
//     for (int i = 0; i < n; i++) {
//         arr[s[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; i++) {
//         if (arr[i]) {
//             cout << (char)(i + 'a') << " : " << arr[i] << endl;
//         }
//     }
// }

void solve()
{
    string s;
    cin >> s;
    int arr[26] = {0};
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (arr[j])
        {
            cout << (char)(j + 'a') << " : " << arr[j] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // solution();
    solve();
    return 0;
}
