#include "helper.h"
 int func(int a,int b)
{
 int c=a-b;int fac;
 int res=n_p_r(a,b,c);
 if(c<b){
  fac=fact(c);
 } else {
  fac=fact(b);
 }
 return res/fac;
}  
 int n_p_r(int x, int y, int z)
{
 if(x==y)
 return 1;
  else {
 if(y<=z) {
    return n_p_r(x,z,y);
   } else return x*n_p_r(x-1,y,z);
 }
}
int fact(int x)
{
 if(x==0){
 return 1;
 } else return x*fact(x-1);
 }
