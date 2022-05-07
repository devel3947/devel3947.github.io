#include <stdio.h>

int main() {
	int n[1000], temp, N, i, j;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &n[i]);

	for (i = 0; i < N - 1; i++) {
		for (j = 1; j < N - i; j++) {
			if (n[j] < n[j - 1]) {
				temp = n[j-1];
				n[j - 1] = n[j];
				n[j] = temp;
			}
		}
	}

	for (i = 0; i < N; i++) {
		printf("%d\n", n[i]);
	}

	return 0;
}
			