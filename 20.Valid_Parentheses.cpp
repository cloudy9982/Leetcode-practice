class Solution
{
public:
    bool isValid(string s)
    {
        int size = s.length();
        if (size <= 1) // 長度1以下則為false
            return 0;
        stack<char> st; // create stack
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else
            {
                if (!st.empty())
                {
                    char top = st.top();
                    if ((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '['))
                        st.pop(); // 移除匹配成功的括號
                    else
                        return 0;
                }
                else
                    return 0;
            }
        }
        if (st.empty()) // 全都成功匹配，回傳true
            return 1;
        return 0;
    }
};