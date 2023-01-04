class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        for(auto i:s)
        {
            reverse(s.begin(),s.end());
            reverse(s.begin()+1,s.end());
            if(s==goal)
            return true;
        }
        return false;
    }
};
