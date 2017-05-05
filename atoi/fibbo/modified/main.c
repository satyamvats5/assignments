#include "helper.c"


int main()
{ 
 	int i;
 	printf("Enter the number=\n");
 	scanf("%d",&i);
	int j=time(NULL);
	printf("%ld\n",fibbo(i));
 	int k=time(NULL);
	printf("No. of calls made=%u\n",CALL);
	printf("Time taken =%d s\n",k-j);
}

