class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    ans=ans+4;
                    i=i+2;
                    continue;
                }
                else if(s[i+1]=='X')
                {
                    ans=ans+9;
                    i=i+2;
                    continue;
                }
                else
                ans=ans+1;
            }
            if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    ans=ans+40;
                    i=i+2;
                    continue;
                }
                else if(s[i+1]=='C')
                {
                    ans=ans+90;
                    i=i+2;
                    continue;
                }
                else
                ans=ans+10;
            }
            if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    ans=ans+400;
                    i=i+2;
                    continue;
                }
                else if(s[i+1]=='M')
                {
                    ans=ans+900;
                    i=i+2;
                    continue;
                }
                else
                ans=ans+100;
            }
            if(s[i]=='V')
            ans=ans+5;
            if(s[i]=='L')
            ans=ans+50;
            if(s[i]=='D')
            ans=ans+500;
            if(s[i]=='M')
            ans=ans+1000;
            i++;
        }
        return ans;
        
    }
};

