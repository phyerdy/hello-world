#include <stdio.h>
int main() {
	int x[5], i,j,temp,a;
		scanf("%d %d %d %d %d", &x[0], &x[1], &x[2],&x[3],&x[4]);
		for (j = 0; j < 4; j++){
		for (i = 0; i < 4; i++)
			if (x[i] < x[i + 1]) {
				int temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
			}
		}
		printf("%d", x[0]*10000+x[1]*1000+x[2]*100+x[3]*10+x[4]);
	return 0;
}
