#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char*names[50],a[50];
	int length,i,n;
	char*x;
	printf("\n how many strings want to enter:");
	scanf("%d",&n);
	printf("\n enter %d elements into the array:",n);
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		gets(a);
		length=strlen(a);
		x=(char*)malloc(length+1);
		
		{
			printf("\n memory insufficiant");
			return(1);
		}
		strcpy(x,a);
		names[i]= x;
	}
	printf("\n the strings are:\n");
	for(i=0;i<n;i++)
	printf("\n %d",names[i]);
	return 1;
}
