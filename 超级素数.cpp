#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,a[5]={0},b[10000]={0},t=0,sum=0,psum=0,average=0,j;
	for(n=2;n<9999;n++)
	{
		m=n;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0&&n!=i)
			{
				goto done;
			}
		}
		for(int j=0;j<=4;j++)
		{
			a[j]=m%10;
			m=m/10;
			sum+=a[j];
			psum+=a[j]*a[j];
			if(m==0)
			{
				break;
			}
		}
		for(int i=2;i<=sqrt(sum);i++)
		{
			if(sum%i==0&&sum!=i)
			{
				goto done; 
			}
		}
		for(int i=2;i<=sqrt(psum);i++)
		{
			if(psum%i==0&&psum!=i)
			{
				goto done;
			}
		}
		b[t]=n;
		t++;
		printf("%d\n",n);
		done:
			sum=0;
			psum=0;
			continue;
	}
	for(j=0;j<10000;j++)
	{
		average+=b[j];
		if(b[j]==0)
		{
			break;
		}
	}
	printf("The average is %d",average/j);
	
	return 0;
} 
