int det(int n){

int x=1, f=1;
  
  while(f*(x+1)<=n){++x; f*=x;}
  
  if(n-f<=f*(x+1)-n)return f;
  return f*(x+1);
}