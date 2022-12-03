class Solution {
public:
int removeDuplicates(vector<int>& v) {
        int i=1,j=1;
        while(j<v.size())
        {
            if(v[j]!=v[j-1])
            {
                v[i]=v[j];
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
    }
};
