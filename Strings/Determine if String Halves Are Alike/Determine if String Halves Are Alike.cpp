class Solution {
public:
    bool halvesAreAlike(string s) {
    int i=0;
    int n=s.length();
    int v1=0,v2=0;
    while(i<n/2)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        v1++;
        i++;
    }
    i=n/2;
    while(i<n)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        v2++;
        i++;
    }
    if(v1==v2)
    return true;
    return false;
    }
};
