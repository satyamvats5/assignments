#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<malloc.h>
struct dat{
	int *S;
	int num;
}dat;
int fact(int x)
{
	int j=1;int l=0;
	int *A;
	A=(int*)calloc(x/2,2);
	for(;j<=x;j++){
		if(x%j==0){
			A[l]=j;
			l++;	
		}
	}
	dat.S=A;
	dat.num=l;
	return 0;
}


int main(int argc, char* argv[])
{       
	int  i,k;
	i=atoi(argv[1]);
/*	printf("Enter the number \n");
	scanf("%d",&i);*/
	if(i<0){
		printf("WRONG INPUT !!!!!!!!!!!\n");
		return 0;
	}	
	fact(i);
	for(k=0;k<dat.num;k++)
		printf("%d\t",dat.S[k]);
	printf("\n");
	return 0;
}
