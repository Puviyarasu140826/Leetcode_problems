int majorityElement(int* v, int n){
        int cnt=1;
        int t=v[0];
        for(int i=1;i<n;i++)
        {
            if(t==v[i])cnt++;
            else cnt--;
            if(cnt==0)
            {
                t=v[i];
                cnt=1;
            }
            
        }
        return t;
}
