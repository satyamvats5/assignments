#include<stdio.h>
int main()
{
	int i,j,k,l,x;
	
	scanf("%d %d",&i,&j);
	while((i>0)&&(j>0)){
		k=(i>j)?j:i;
		l=(i>j)?i:j;
		for(x=k;x>0;x--){
			if((l%x)==0&&(k%x)==0){
			printf("Required HCF =%d\n",x);
			break;
			}
		}
		scanf("%d %d",&i,&j);
	}
	if((i==0)||(j==0))
		printf("Required HCF=%d\n",(i==0)?j:i);
	if((i<0)||(j<0))
		printf("Wrong input!!!!!\n");
	return 0;
}
