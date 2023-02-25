class Solution {
public:
    int searchInsert(vector<int>& v, int t) {
        int i=0;
        while(i<v.size())
        {
            if(v[i]==t)
                return i;
            i++;
        }
        if(t<v[0])
            return 0;
        else if(t>v[v.size()-1])
            return v.size();
        i=0;
        while(i<v.size()-1)
        {
           if(t>v[i]&&t<v[i+1])
           return i+1;
           i++;
        }
    return i+1;
    }
};
