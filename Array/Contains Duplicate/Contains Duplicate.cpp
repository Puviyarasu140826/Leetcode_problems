class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_map<int,int> m;
        for(auto i:v)
            m[i]=m[i]+1;
        for(auto i:m)
        {
            if(i.second>1)
            return true;
        }
        return false;
    }
};
