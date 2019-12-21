#include <iostream>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int **arr = new int*[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N] {0, };
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
}