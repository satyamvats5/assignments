#include<stdio.h>
#include<string.h>
void fcombi(char *,int,int);
void f_open(char *);
void swap (char*,char*);
int main(int argc ,char * argv[])
{
	f_open(argv[1]);
	return 0;
}
void f_open(char * argv)
{	
	int len;
	len=strlen(argv);
	fcombi(argv,0,len);
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
