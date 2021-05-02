#include<stdio.h>

void main()
{
	
	int i,a[100],b[100],c[50],t,n,l,j,s;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	
	i=0;
	j=0;
	s=0;
	l=0;
	while(i<n-1)
	{
		if(a[i]==a[i+1]+1)
		{
			i++;
			l++;
		}	
		else
		{
			b[j]=a[i];
			c[s]=a[i+1]+1;
			a[i]=c[s];
			i++;
			j++;
			s++;
		}
		if(l=n-1)
		{
			printf("it is already a dec array and doesnot require changes");
		}
	}
	t=j;
	
	i=0;
	while(i<n-1)
	{
		if(a[i]==a[i+1]+1)
		{
			i++;
		}
		else
		{
			printf ("not possible");
			break;
		}
		if(i=n-1)
		{
			j=0;
			s=0;
			while(j<t)
			{
				printf("you can remove %d by %d to make a decreasing array",b[j],c[s]);
				j++;
				s++;
			}
		}
	}
	
	
	getch();
	
}	 		
