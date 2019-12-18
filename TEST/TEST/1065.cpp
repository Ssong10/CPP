#include <stdio.h>
int main() {
	int N, num = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		if (i < 100) {
			num++;
		}
		else {
			if (((i / 100) - ((i % 100) - (i % 10)) / 10) == (((i % 100) - (i % 10)) / 10 - (i % 10)))
			{
				num++;
			}
		}
	}
	printf("%d", num);
}