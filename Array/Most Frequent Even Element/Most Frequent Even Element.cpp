class Solution {
public:
    int mostFrequentEven(vector<int>& v) {
        map<int,int> m;
        for(auto i: v)
        {
            if(i%2==0)
            {
                m[i]=m[i]+1;
            }
        }
        int f=0,ans=-1;
        for(auto i: m)
        {
            if(i.second>f)
            {
                ans=i.first,f=i.second;
            }
        }
        return ans;
        
    }
};
