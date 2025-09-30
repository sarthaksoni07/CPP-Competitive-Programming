#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int i;
    cin >> i;
    string s;
    cin >> s;
    int score;
    int index ;
    while (index < s.length())
    {
        if (s[i - 1] == 'X' || s[i - 1] == 'Y' || s[i - 1] == 'Z' && index == s.length() - 1)
        {
            break;
        }
        switch (s[index])
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'X':
            if (s[index + 1] < i)
            {
                s.erase(index + 1, 1);
                continue;
            }
            break;
        case 'Y':
            if (index + 1 < s.length())
            {
                char next = s[index + 1];
                s.erase(index + 1, 1);
                s.push_back(next);
            }

            break;
        case 'Z':
        {
            if (index + 1 < s.length())
            {
                if (s[index + 1] == 'V')
                {
                    score /= 5;
                    s.erase(index + 1, 1);
                }
                else if (s[index + 1] == 'W')
                {
                    score /= 2;
                    s.erase(index + 1, 1);
                }
            }

            break;
        }

            index++;
        }
    }

    cout<<score;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t; cin>>t;while(t--)
    solve();

    return 0;
}