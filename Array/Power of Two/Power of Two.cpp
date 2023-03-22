class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long p=1;
        int i=0;
        while(p<=n){
            if(p==n) 
            return true;
            i++;
            p=pow(2,i);
        }
        return false;
    }
};
