#include<stdio.h>
int ARR[500];
#include<time.h>
long fibbo(int x)
{
  	if(x==1||x==0)
  		return x;
	else 
		return fibbo(x-1)+fibbo(x-2);
}	
	
int main()
{ 
 	int i;
	int k=time(NULL);
 	printf("Enter the number=\n");
 	scanf("%d",&i);
 	printf("res=%ld\n",fibbo(i));
	int l=time(NULL);
	printf("time taken=%d s\n",l-k);
	return 0;
}

