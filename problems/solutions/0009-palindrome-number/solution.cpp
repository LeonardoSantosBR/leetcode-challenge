class Solution {
public:
    bool isPalindrome(int x) {
        string st = to_string(x);
        string str = st;
        reverse(str.begin(), str.end());

        bool r = st == str ? true : false;
        return r;
    }
};