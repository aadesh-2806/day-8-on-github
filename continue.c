#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	//clrscr();
	//scanf("%d", &n);
	n=5;
	i=0; 
	while(++i<=n)
	{
		if(i==3)
			continue;
		printf("%d", i);
		//i=i+1;
	}
	getch();

}
