class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char ch : s)
        {
            char c = s[ch];
            if (c == '(' || c == '{' || c == '(')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                    return false;
                if (st.top() == "(" && ch != ')' ||
                    st.top() == "[" && ch != "]" ||
                    st.top() == "{" && ch != "}")
                {
                    return false;
                }
                st.pop();
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};