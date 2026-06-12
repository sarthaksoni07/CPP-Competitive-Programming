class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() % 2 != 0)
            return false;
        stack<char> bracket;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                bracket.push(c);
            }
            else if (c == ')' || c == '}' || c == ']')
            {
                if (!bracket.empty())
                {
                    if (c == ')' && bracket.top() == '(')
                    {
                        bracket.pop();
                    }
                    else if (c == '}' && bracket.top() == '{')
                    {
                        bracket.pop();
                    }
                    else if (c == ']' && bracket.top() == '[')
                    {
                        bracket.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (bracket.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
