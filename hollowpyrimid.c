#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf(" ");
		}
		
		for(int k=0;k<(2*i-1);k++)
		{
			if(k==0 || (k==(2*i-2)))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<(2*i-1);k++)
		{
			if(k==0 || k==(2*i-2))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

}
