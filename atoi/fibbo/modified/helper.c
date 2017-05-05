#include "helper.h"
	
long fibbo(int x)
{
  	if(arr[x]!=-1)
		return arr[x];
	else{
		
		CALL++;
	        if(x==0||x==1)
	  		return arr[x]=x;
		else
			return arr[x]=fibbo(x-1)+fibbo(x-2);
}
}	
long fun(int y)
{
 	int i,j;
	long res;
 	for(j=0;j<y;j++)
	{	
		arr[j]=-1;
		res=fibbo(j);
  	}
 	return res;
}
