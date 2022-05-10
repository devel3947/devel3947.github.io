#include <stdio.h>

int main() {
	int height[9] = { 0 }, i, j, sum = 0, temp, spy1, spy2;

	for (i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
		sum += height[i];
	}

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum - height[i] - height[j] == 100) {
				spy1 = height[i];
				spy2 = height[j];
				break;
			}
		}
	}

	for (i = 0; i < 8; i++) {
		for (j = 1; j < 9 - i; j++) {
			if (height[j] < height[j - 1]) {
				temp = height[j - 1];
				height[j - 1] = height[j];
				height[j] = temp;
			}
		}
	}

	for (i = 0; i < 9; i++){
        if (height[i] == spy1 || height[i] == spy2)
            continue;
		printf("%d\n", height[i]);
    }

	return 0;
}