#include<stdio.h>
void print_save(int i1,int j2,int A3[i1][j2])
{
	FILE *f=fopen("res.txt","a+");
	int k,l;
	for(k=0;k<i1;k++){
		for(l=0;l<j2;l++){
			printf("%d\t",A3[k][l]);
			fprintf(f,"%d\t",A3[k][l]);
		}
		printf("\n");
		fprintf(f,"\n");
	}
	fprintf(f,"*****************\n");
	fclose(f);
	return ;
	
}
void mult(int i1,int j1,int i2,int j2,int A1[i1][j1],int A2[i2][j2])
{
	int k,l,m,sum=0,A3[i1][j2];
	for(k=0;k<i1;k++){
		for(l=0;l<j2;l++){
			for(m=0;m<j1;m++){
				sum=sum+(A1[k][m]*A2[m][l]);
			}
			A3[k][l]=sum;
			sum=0;
		}
	}
	print_save(i1,j2,A3);
	return ;
}

int main(int argc,char * argv[])
{
	FILE * f1,* f2;

	int i1,i2,j1,j2,k,l,m;
	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"r");
	fscanf(f1,"%d %d",&i1,&j1);
	fscanf(f2,"%d %d",&i2,&j2);
	if(j1 != i2){
		printf("Invalid input\n");
		return 0;
	}
	int A1[i1][j1],A2[i2][j2],A3[i1][j2];
	for(k=0;k<i1;k++)
		for(l=0;l<j1;l++)
			fscanf(f1,"%d",&A1[k][l]);
	for(k=0;k<i2;k++){
		for(l=0;l<j2;l++)
			fscanf(f2,"%d",&A2[k][l]);
		}
	mult(i1,j1,i2,j2,A1,A2);
	
	fclose(f1);
	fclose(f2);
	return 0;
}
