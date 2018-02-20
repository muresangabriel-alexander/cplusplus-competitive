
int sub (int n , int v[], int k){

    int cnt =0;
    int s=0;
    for(int i=0; i<n && cnt<=k; ++i)if(v[i]%2==1){++cnt,s+=v[i]; if(cnt == k)break;}

    if(cnt==k)return s;
    else return -1;
}