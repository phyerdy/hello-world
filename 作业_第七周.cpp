//ʵ�ִ����ж�2��float�������
//��ȷ��ʱС�����5λ
#include <stdio.h>

int main()
{
	float m,n,h;
	printf("The m and n is:" );
	scanf("%f%f", &m, &n);
	if (m<n) {
		h = m;
		m = n;
		n = h;
	}
	if (m - n < 1e-6)
		printf("yes");
	else
		printf("no");
	
	return 0;
}
