class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            m.push(s[i]);
            if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
                if(m.empty()) return false;
                if(s[i]==')'&&m.top()=='('||s[i]==']'&&m.top()=='['||s[i]=='}'&&m.top()=='{')
                m.pop();
                else
                return false;
            }
            i++;
        }
        if(m.empty())
        return true;
        return false;
    }
};
