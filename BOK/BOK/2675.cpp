#include <stdio.h>

int main() {
	int tc, N;
	char c[20];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d %s", &N, c);
		// string �����Է°��� 'c' �� �Ҵ�

		printf("\n");
		for (int j = 0; c[j] != 0; j++) { 
		// c�� �ε���, ���� ������ ���� 
			for (int i = 0; i < N; i++) {
			// N �� �ݺ��Ͽ� c[j] ���
				printf("%c", c[j]);
			}

		}
		printf("\n");

	}

}