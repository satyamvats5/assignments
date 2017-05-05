#include<stdio.h>
#define MAXLINE 1000
#dwfine max 100
int get_line(char line[],int count)
{
	int i,j;
	for(j=0 ; j < count && (i = getchar()) != EOF && i!='\n' && i != '\0' ;j++)
		line[j]=i;
	if(i=='\n')
		line[j]='\n';
	j++;
	line[j]='\0';
	return j;
}
void copy(char from[],char to[])
{
	int i=0;
	while((to[i]=from[i]) != '\0')
		i++;
}


int main()
{
	int len,max=0;
	char line[MAXLINE]; char maxline[MAXLINE];
	while((len=get_line(line,MAXLINE))>1){
		if(max<len){
			max=len;
			copy(line , maxline);
		}
	}
	if(max>0)
		printf("%s",maxline);

}


