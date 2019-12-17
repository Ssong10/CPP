#include <stdio.h>

int main() {
	int tc, N;
	char c[20];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d %s", &N, c);
		// string 포맷입력값을 'c' 에 할당

		printf("\n");
		for (int j = 0; c[j] != 0; j++) { 
		// c를 인덱싱, 값이 없을때 까지 
			for (int i = 0; i < N; i++) {
			// N 번 반복하여 c[j] 출력
				printf("%c", c[j]);
			}

		}
		printf("\n");

	}

}