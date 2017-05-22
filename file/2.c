#include<stdio.h>
int main()
{
	FILE * f;

	int i,j,k,l;
	f=fopen("hlo.txt","a+");
	fscanf(f,"%d %d",&i,&j);
	int A[i][j];int sum=0;
	for(k=0;k<i;k++)
		for(l=0;l<j;l++)
			fscanf(f,"%d",&A[k][l]);
	for(k=0;k<i;k++){
		for(l=0;l<j;l++){
			printf("%d\t",A[k][l]);
				sum+=A[k][l];
		}
		printf("\n");
	}
	printf("sum of the given array =%d\n",sum);

	
/*	printf("2nd string |%s|\n",A2);
	printf("3rd string |%s|\n",A3);
	printf("4th string |%s|\n",A4);
	printf("5th string |%s|\n",A5);
	printf("6th string |%s|\n",A6);*/
	fclose(f);
	return 0;
}
