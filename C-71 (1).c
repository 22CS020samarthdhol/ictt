#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i, e=0, o=0, p=0, n=0;
int num[5];
clrscr();
printf("\nEnter any 25 numbers\n");
for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		{
			e=e+1;
				if(num[i]>0)
				{
					p=p+1;
				}
				else
				{
					n=n+1;
				}
		}
		else
		{
			o=o+1;

				if(num[i]>0)
				{
					p=p+1;
				}
				else
				{
					n=n+1;
				}
		}
	}
printf("\nSR.NO.\t\tPARAMETER\t\tCOUNTS\n");
printf("\n1.\t\tPositive number:\t%d",p);
printf("\n2.\t\tnegtive number:\t\t%d",n);
printf("\n3.\t\teven number:\t\t%d",e);
printf("\n4.\t\todd number:\t\t%d",o);
getch();
}
