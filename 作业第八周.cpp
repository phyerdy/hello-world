#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("旅行社有");
	scanf("%d", &a);
	printf("会英语的有");
	scanf("%d", & b);
	printf("会俄语的有");
	scanf("%d", &c);
	printf("一样都不会的有");
	scanf("%d", &d);
	if (a-d>b&&a-d>c)
	{
		printf("两样都会的有%d人", b + c + d - a);
	}
	else
	{
		printf("输入数据错误，无法计算");
	}
		return 0;
}
