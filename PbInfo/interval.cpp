int interval(int a[], int n){
    int inceput=a[0];
    int sfarsit=a[n-1];
    if(inceput>sfarsit)swap(inceput,sfarsit);
    int cnt=0;
    for(int i=0; i<n; ++i)if(a[i]>=inceput && a[i]<=sfarsit)++cnt;
 //   cout<<inceput<<' '<<sfarsit;
    return cnt;

}