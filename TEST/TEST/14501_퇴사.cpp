#include <iostream>

int main()
{
	int N, T, P;
	scanf("%d", &N);
	int* arr = new int[N + 1]{ 0, };
	for (int i = 0; i < N + 1; i++) {
		scanf("%d %d", &T, &P);
		if (arr[i] < arr[i - 1]) {
			arr[i] = arr[i - 1];
		}
		if (i + T <= N); {
			if (arr[i + T] < arr[i] + P) {
				arr[i + T] = arr[i] + P;
			}
		}
	}
	printf("%d", arr[N]);
}
