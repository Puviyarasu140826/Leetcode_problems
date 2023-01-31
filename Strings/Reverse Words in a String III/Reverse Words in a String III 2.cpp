class Solution {
public:
    string reverseWords(string s) {
        string str="",tmp="";
        int n=s.length();
        for(int i=0;i<=n;i++){
            if(i==n){
                reverse(tmp.begin(),tmp.end());
                str+=tmp;
            }
            else if(s[i]==' '||i==n){
                reverse(tmp.begin(),tmp.end());
                str+=tmp+" ";
                tmp="";
            }
            else
            tmp+=s[i];

        }  
        return str;      
    }
};
