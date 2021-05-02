#include<stdio.h>

void main()
{
	
	int i,a[100],k,n,s,j,t,p;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);						//diff.c
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter value for diff=");
	scanf("%d",&t);

	i=0;
	while(i<n-1)
	{
		j=i+1;
		while(j<n)
		{
			if(a[i]-a[j]==t || a[i]-a[j]==-t)
			{
				printf("yes");
				goto abc;
			}
			j++;
		}
		i++;
	}
	abc:
	if(i==n-1)	
	{
		printf("no");
	}
	getch();
	
}	
