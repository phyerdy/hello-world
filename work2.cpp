#include<stdio.h>
int main()
{
	int m, n, temp, i;
	printf("Input m & n:");
	scanf("%d%d", &m, &n);
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = n; i > 0; i--)
		if (m % i == 0 && n % i ==0)
			break;
	if (i > 2)
		printf("%d and %d are not mutually prime", m, n);
	else
		printf("%d and %d coprime", m, n);

	return 0;
}
