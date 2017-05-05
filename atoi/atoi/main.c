#include<stdio.h>
#include "helper.c"
int main()
{ int i,j;
 char C[max];
for(j=0 ; j < max && (i = getchar()) != EOF && i!='\n' && i != '\0' ;j++)
  C[j]=i;
   C[j]= '\0';
  long result= atoi1(C);
   printf("%ld\n",result);
   return 0;
}
