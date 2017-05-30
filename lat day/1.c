#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fcombi(char *,int,int);
void f_open(char *,int);
void swap (char*,char*);
int main(int argc ,char * argv[])
{	
	int i=atoi(argv[1]);
	f_open(argv[2],i);
	return 0;
}
void f_open(char * argv,int x)
{	
	int len,l;
	len=strlen(argv);
	char A[len];
	char B[x+1];
	strcpy(A,argv);
	for(int i=0;i<len;i++){
		for(l=0;l<x;l++){
			if((l+i)>=len){
				B[l]=A[(l+i)-len];
			}else {
				B[l]=A[(l+i)];
			}
		}
		B[l]='\0';
//		printf("%s\n",B);
		fcombi(B,0,x);
	}
	return ;
}
void fcombi(char *A,int r,int l)
{
	if(r==(l-1)){
		FILE *f=fopen("t1.txt","a+");

		fprintf(f,"%s\n",A);
		printf("%s\n",A);
		fclose(f);
		return;
	} else {
		for(int j=r;j<l;j++){
			swap((A+j),(A+r));
			fcombi(A,r+1,l);
			swap((A+j),(A+r));
		}
	}
}
void swap(char *A,char *B)
{
	char temp;
	temp=*A;
	*A=*B;
	*B=temp;
}
