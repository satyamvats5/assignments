#include<stdio.h>
int print(int i,int j,int A[i][j])
{
	int k,l,sum=0;
	for(k=0;k<i;k++){
		for(l=0;l<j;l++){
			printf("%d\t",A[k][l]);
				sum+=A[k][l];
		}
		printf("\n");
	}
	return sum;
}
int main()
{
	FILE * f;
	int i,j,k,l;
	f=fopen("hlo.txt","a+");
	fscanf(f,"%d %d",&i,&j);
	int A[i][j]; 
	int sum;
	for(k=0;k<i;k++)
		for(l=0;l<j;l++)
			fscanf(f,"%d",&A[k][l]);
	sum=print(i,j,A);
	printf("Sum of elements of matrix =%d\n",sum);
	fclose(f);
	return 0;
}
