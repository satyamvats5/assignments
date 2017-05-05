#include<stdio.h>
int add(int,int,int);
int main()
{
	int a,b,c,res,flag2=1;
	scanf("%d %d",&a,&b);
	c=a;
	if(b<0)
		flag2=-1;
	res=flag2*add(a,b,c);
	printf("%d",res);
	return 0;
}

int add(int x,int y,int z)
{
	if(y>0){
		if(y==1)
			return x;
		add(x+z,y-1,z);
	}
	if(y<0){
		if(y==-1)
			return x;
		add(x+z,y+1,z);
	}
	if(y==0)
		return 0;
}
