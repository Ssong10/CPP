#include <iostream>

int main() {
	int N, jm, hs;
	scanf("%d %d %d", &N, &jm, &hs);
	int result = 0;
	while (N>1) {
		N = (N + 1) / 2;
		jm = (jm + 1) / 2;
		hs = (hs + 1) / 2;
		result++;
		if (jm == hs) break;
	}
	if (jm==hs)	printf("%d", result);
	else printf("-1");
}