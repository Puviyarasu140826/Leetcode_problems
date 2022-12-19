void moveZeroes(int* a, int numsSize){
    int cnt=0;
    int t=0;
    for(int i=0;i<numsSize;i++)
    {
        if(a[i])
        {
            t=a[i];
            a[i]=a[cnt];
            a[cnt]=t;
            cnt++;
        }
    }
}
