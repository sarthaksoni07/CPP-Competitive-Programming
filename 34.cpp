#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;
    for (int i = 1; i <= q; i++)
    {
        string c;
        cin >> c;
        if (c == "pop_back")
        {
            s.pop_back();
        }
        else if (c == "front")
        {
            cout << s.front() << endl;
        }
        else if (c == "back")
        {
            cout << s.back() << endl;
        }
        else if (c == "sort")
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
            {
                swap(a, b);
            }
            a--;
            b--;
            sort(s.begin() + a, s.begin() + b + 1);
        }
        else if (c == "reverse")
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
            {
                swap(a, b);
            }
            a--;
            b--;
            reverse(s.begin() + a, s.begin() + b + 1);
        }
        else if (c == "print")
        {
            int a;
            cin >> a;
            cout << s[a - 1];
        }
        else if (c == "substr")
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
            {
                swap(a, b);
            }
            a--;
            b--;
            cout << s.substr(a, b - a + 1) << endl;
        }
        else if (c == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }

    return 0;
}