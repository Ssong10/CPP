#include <iostream>
#include <vector>
using namespace std;

int main() {
	bool arr[500000] = { false, };
	int k = 0;
	vector<int> v;
	int N, M;
	scanf("%d %d", &N, &M);
	arr[N] = true;

	while (M < 500000) {
		if (arr[M + ((k * (k + 1)) / 2)]) {
			printf("%d", k);
			return 0;
		}
		for (int i = 0; i < 500000; i++)
		{
			if (arr[i] and arr[i] == k) {
				v.push_back(i);
			}
			for (int j = 0; j < v.size(); j++) {
				int val = v.pop_back();

			}
			
		}
		k++;
	}
}