int cmmdc(int x, int y)
{ if(x%y==0) return y;
  else return cmmdc(y,x%y);
}