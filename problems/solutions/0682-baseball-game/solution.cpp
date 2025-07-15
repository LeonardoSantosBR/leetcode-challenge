class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> st1;
        for (auto e : operations)
        {
            if (e == "+")
            {
                int a = st1.top();
                st1.pop();
                int b = st1.top();
                st1.pop();
                st1.push(b);
                st1.push(a);
                st1.push(a + b);
            }
            else if (e == "D")
            {
                int l = st1.top();
                st1.push(l * 2);
            }
            else if (e == "C")
            {
                st1.pop();
            }
            else
            {
                st1.push(stoi(e));
            }
        }
        int sum = 0;
        while (!st1.empty())
        {
            sum += st1.top();
            st1.pop();
        }
        return sum;
    }
};