class Solution {
public:
    string reversePrefix(string s, char ch) {
        string tmp=" ";
        for(int i=0;i<s.length();i++){
            //tmp+=s[i];
            if(s[i]==ch){
                reverse(begin(s),begin(s)+s.find(ch)+1);
            }
        }
        
        return s;
    }
};
