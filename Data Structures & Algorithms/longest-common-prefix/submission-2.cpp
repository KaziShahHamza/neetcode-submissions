class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 0; i < prefix.length(); i++) {
            for (const string& s : strs) {
                if (i == s.length() || s[i] != prefix[i]) {
                    return s.substr(0, i);
                }
            }
        }
        return prefix;
    }
};