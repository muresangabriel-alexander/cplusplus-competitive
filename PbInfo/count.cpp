int count(double a[], int n){
    int cnt=0;
    double s=0;
    for(int i=0; i<n; ++i)s+=a[i];
    for(int i=0; i<n; ++i)if(a[i]>=s/n)++cnt;
    return cnt;
}