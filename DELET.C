#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[50],k;
	//clrscr();
	printf("Enter no,of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter number to delete=");
	scanf("%d",&k);

	for(i=0;i<n;i++)
	{	
		if(k!=a[i])
		{
			printf("%d ",a[i]);
		}
	}
	 getch();
}
