class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>count(128);
        for(const auto i:s)
        ++count[i];
        for(const auto i:t)
        if(--count[i]<0)
        return i;
        throw;
    }
};
