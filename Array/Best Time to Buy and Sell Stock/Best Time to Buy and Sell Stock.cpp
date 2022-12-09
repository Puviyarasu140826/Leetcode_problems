class Solution {
public:
    int maxProfit(vector<int>& v) {
        int l=0,r=1;
        int p=0,maxp=0;
        while(r<v.size())
        {
            if(v[l]<v[r])
            {
            p=v[r]-v[l];
            maxp=max(maxp,p);
            }
            else
            {
                l=r;
            }
            r++;

        }
        return maxp;
    }
};
