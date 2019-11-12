#include<cmath>
#include<cstdio>
int a[100005],b[10],mark[10],_now;
void find(int ceng)
{
	if(ceng>=6)
	{
		a[_now]=1;
		return ;
	}
	for(int i=1;i<=5;i++)
	{
		if(!mark[i])
		{
			int temp=_now;
			mark[i]=1;
			_now=_now*10+b[i];
			find(ceng+1);
			mark[i]=0;
			_now=temp;
		}
	}
}
bool judge(int m)
{
	for(int i=2;i<=sqrt(m);i++)
		if(m%i==0) return true;
	return false;
}
int main()
{
	for(int i=1;i<=5;i++) scanf("%d",&b[i]);
	find(1);
	for(int i=99999;i>=10000;i--)
	{
		if(a[i]&&!judge(i))
		{
			printf("%d",i);
			break;
		}
		else if(i==10000)
		{
			printf("error");
			break;
		}
	}
	return 0;
}
