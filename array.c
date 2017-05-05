#include<stdio.h>
int A[500];
int l=0;
void fact(int x)
{
 	int j=1;
	int *A;
	A=(int*)calloc(x/2,2);
 	for(;j<=x;j++){
		if(x%j==0){
		A[l]=j;
		l++;	
		}
}
			
		
int main()
{       
	int  i,k;
	scanf("%d",&i);
	
	fact(i);
	for(k=0;k<l;k++)
		printf("%d\t",ARR[k]);
		printf("\n");
	return 0;
}
