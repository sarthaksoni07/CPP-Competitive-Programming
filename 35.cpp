#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        reverse(s.begin(), s.end());
        cout << s << " ";
    }
    // cin, only run if there is no space, when there is a space is stops. we have used while loop because it run differenct times for different strings

    return 0;
}