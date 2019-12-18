#include <stdio.h>

int main() {
	int N, K;
	scanf("%d %d", &N, &K);

	int left = 1, right = K, ans;
	while (left <= right) {
		long long cnt = 0; 
		int mid = (left + right) / 2;
		for (int i = 1; i <= N; i++) {
			if (mid / i > N) cnt += N;
			else cnt += mid / i;
		}
		if (cnt < K) left = mid + 1;
		else ans = mid, right = mid - 1;
	}
	printf("%d", ans);

	return 0;
}