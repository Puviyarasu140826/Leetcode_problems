class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto i : s) {
            if(isupper(i)) {
                i = tolower(i);
            }
            if(isalnum(i)) {
                str.push_back(i);
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};
