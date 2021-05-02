#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,l,x,y,a[50],b[50],c[50];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{
	      printf("value %d=", i+1);
	      scanf("%d", &a[i]);
	      i=i+1;
	}
	printf("\n");


       printf("value ");
       scanf("%d", &l);



				i=0;

				while(i<n)
				{
				   if(l!=a[i])
				   {
					printf("%d ", a[i]);
				   }

					 i=i+1;
				}

	 getch();
}
