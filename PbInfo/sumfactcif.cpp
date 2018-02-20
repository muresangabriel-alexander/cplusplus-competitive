int sumfactcif(int n){
if(n==0){return 1;}
int fact=0;
while (n>0){
switch (n%10){
case 0: fact+=1; break;
case 1: fact+=1; break;
case 2: fact+=2; break;
case 3: fact+=6; break;
case 4: fact+=24; break;
case 5: fact+=120; break;
case 6: fact+=720; break;
case 7: fact+=5040; break;
case 8: fact+=40320; break;
case 9: fact+=362880; break;
}
n/=10;
}
return fact;
}