#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("��������");
	scanf("%d", &a);
	printf("��Ӣ�����");
	scanf("%d", & b);
	printf("��������");
	scanf("%d", &c);
	printf("һ�����������");
	scanf("%d", &d);
	if (a-d>b&&a-d>c)
	{
		printf("�����������%d��", b + c + d - a);
	}
	else
	{
		printf("�������ݴ����޷�����");
	}
		return 0;
}
