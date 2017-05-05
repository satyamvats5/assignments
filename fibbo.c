#include<stdio.h>
int ARR[500];
int fibbo(int x)
{
  	if(ARR[x]!=-1)
		return ARR[x];
        else if(x==0||x==1)
  		return ARR[x]=x;
		else
		return (ARR[x]=fibbo(x-1)+fibbo(x-2));
}	
int main()
{ 
 	int i,j;
 	printf("Enter the number=\n");
 	scanf("%d",&i);
 	for(j=0;j<i;j++){
		ARR[j]=-1;
		printf("%d\n",fibbo(j));
}
}
