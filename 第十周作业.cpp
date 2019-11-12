#include<stdio.h>
int main()
{
	int n=2,sum=1;
	while(1)
	{
		n++;
		int temp=n;
		while(temp)
		{
			if(temp%10==1) sum++;
			temp/=10;
		}
		if(sum==n)
		{
			printf("%d",n);
			break;
		}
	} 
	
	return 0;
} 
