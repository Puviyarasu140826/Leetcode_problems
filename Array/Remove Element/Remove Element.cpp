class Solution {
public:
    int removeElement(vector<int>& v, int val) {
        int i=0,j=0;
        while(j<v.size())
        {
            if(v[j]!=val)
            {
                v[i]=v[j];
                i++;
                j++;
            }
            else
            j++;
        }
        return i;
            
    }
};
