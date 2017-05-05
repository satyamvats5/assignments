#include<stdio.h>
#include "helper.c"
int main()
{
 int i,j;
  printf("Enter the number for n=");
  scanf("%d",&i);
  printf("Enter the value for r=");
  scanf("%d",&j);
  printf("Required value is=%d\n",func(i,j));
  return 0;
}
