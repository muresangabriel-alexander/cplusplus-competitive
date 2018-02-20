
void F (int n, int a[], int &k){
    int nr=0;
    bool ok = 0;
    for(int i=0; i<n; ++i)if(a[i]%2==0){nr=nr*10+a[i]; ok=1;}

    if(!ok)k = -1;
else
    k=nr;

}
