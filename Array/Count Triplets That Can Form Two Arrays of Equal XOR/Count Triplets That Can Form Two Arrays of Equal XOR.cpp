class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int sum=0,count=0;
        for(int i=0;i<arr.size()-1;i++){
            int x=arr[i];
            for(int j=i+1;j<arr.size();j++){
                x^=arr[j];
                if(x==0)
                count+=(j-i);
            }
        }
       return count; 
    }
};
