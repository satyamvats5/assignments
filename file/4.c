#include<stdio.h>
int main()
{
	FILE *f1; FILE * f2;
	f1=fopen("mat1.txt","w");
	f2=fopen("mat2.txt","w");
	fprintf(f1,"3 3\n1 1 1\n1 1 1\n1 1 1\n");
	fprintf(f2,"3 3\n1 1 1\n1 1 1\n1 1 1\n");
	fclose(f1);
	fclose(f2);
	return 0;
}
