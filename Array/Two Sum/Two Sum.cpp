class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        unordered_map<int,int> m;
        vector<int> r;
        for(int i=0;i<v.size();i++)
        {
            int k=target-v[i];
            if(m.count(k))
            {
                r={m[k],i};
                return r;
            }
            m[v[i]]=i;
        }
        return {0};

        
    }
};
