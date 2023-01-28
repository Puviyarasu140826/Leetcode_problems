class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         vector<int>result;
        vector<int>v1(26);
        if(s.size()<p.size()){
            return result;
        }
        for(int i=0;i<p.size();i++){
            v1[p[i]-97]++;
        }
        for(int i=0;i<=(s.size()-p.size());i++){
            vector<int>v2(26);
            for(int index=i;index<(i+p.size());index++){
                v2[s[index]-97]++;
            }
            if(v1==v2){
                result.push_back(i);
            }        
        }
        return result;
        
    }
};
