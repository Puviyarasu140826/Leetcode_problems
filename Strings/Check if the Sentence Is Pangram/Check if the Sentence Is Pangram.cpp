bool checkIfPangram(char * s){
    int arr[26]={0};
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='a'&&s[i]<='z'){
            arr[s[i]-'a']=1;
        }
        else if(s[i]>='A'&&s[i]<='B'){
            arr[s[i]-'A']=1;
        }
        i++;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==0)return false;
    }
    return true;
}
