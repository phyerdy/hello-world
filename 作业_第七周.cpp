//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
	float m = 1.78000;
	float x = 1.77999, y = 2;
	float z = m / y, z1 = x / y;
	if (z - z1>=1e-6) {
		z = (m + x) / y;
	}
	printf("Z is %.5f\n", z);
	printf("Z1 is %.5f\n", z1);
	return 0;
}
