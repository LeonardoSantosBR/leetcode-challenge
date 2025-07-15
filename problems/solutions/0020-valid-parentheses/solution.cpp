class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    return false;
                if (st.top() == '(' && ch != ')' ||
                    st.top() == '[' && ch != ']' ||
                    st.top() == '{' && ch != '}')
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