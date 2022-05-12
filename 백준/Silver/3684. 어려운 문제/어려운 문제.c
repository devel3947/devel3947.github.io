#include <stdio.h>
#include <stdlib.h>

int main() {
	int test_case, a, b, i, x[100] = { 0 };

	scanf("%d", &test_case);
	for (i = 0; i < test_case; i++) {
		scanf("%d", &x[i]);
	}

	for (a = 0;a <= 10000;a++) {
		for (b = 0;b <= 10000;b++) {
			for (i = 0;i < test_case;i++) {
				if (x[i + 1] == (a * ((a * x[i] + b) % 10001) + b) % 10001) {
					continue;
				}
				else
					break;
			}
			if (i == test_case - 1) {
				for (i = 0;i < test_case;i++)
					printf("%d\n", (a * x[i] + b) % 10001);
				exit(0);
			}
		}
	}
}