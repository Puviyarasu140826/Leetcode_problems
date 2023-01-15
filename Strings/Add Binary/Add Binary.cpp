class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;

        string ans="";
        int carry,aval,bval;
        carry=0;

        while(i>=0 || j>=0 || carry>0)
        {
            aval=0;
            bval=0;
            if(i>=0)
            {
                aval=a[i]-'0';
            }
            if(j>=0)
            {
                bval=b[j]-'0';
            }

            int sum=aval+bval+carry;
            char c=sum%2+'0';
            ans=c+ans;
            carry=0;
            if(sum>1)
            {
                carry=1;
            }
            i--;
            j--;
        }
        return ans;
    }
};
