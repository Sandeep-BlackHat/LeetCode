class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string s2 = s;
        reverse(s.begin(), s.end());
        return (s == s2);
    }
};
