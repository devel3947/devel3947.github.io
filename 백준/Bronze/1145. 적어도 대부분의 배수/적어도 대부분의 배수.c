#include <stdio.h>

int main() {
	int n[5] = { 0 }, result = 1, count, i;

	scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);

	while (1) {
		count = 0;
		for (i = 0; i < 5; i++) {
			if (result % n[i] == 0)
				count++;
		}
		if (count >= 3)
			break;
		result++;
	}

	printf("%d", result);

	return 0;
}