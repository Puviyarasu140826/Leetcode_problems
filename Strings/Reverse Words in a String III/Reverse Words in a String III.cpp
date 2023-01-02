class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                reverse(str.begin(),str.end());
                ans=ans+str+" ";
                str="";
            }
            else
            str+=s[i];
        }
        reverse(str.begin(),str.end());
        ans=ans+str;
        return ans;
    }
};
