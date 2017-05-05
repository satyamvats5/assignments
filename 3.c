#include<stdio.h>
int n_c_r(int x ,int y)
{
if(x==0||x==1)
	return x;
else 
	return (n_c_r(x-1,y-1)+n_c_r(x-1,y));
}
int main()
{
        int i,j;
        scanf("%d %d",&i,&j);
        printf("%d",n_c_r(i,j));
        return 0;
}

