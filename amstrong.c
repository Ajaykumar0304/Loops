#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	
	int temp,count=0;

	temp=n;

	while(temp!=0)
	{
		count++;
		temp=temp/10;
	}

	int ans,sum=0;

	ans=n;

	while(ans!=0)
	{
		int d=ans%10;
		sum=sum+pow(d,count);
		ans=ans/10;
	}

	if(sum==n)
		printf("Amstrong number\n");
	else
		printf("Not an amstrong number\n");
}
