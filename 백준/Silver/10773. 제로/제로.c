#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 0, i, temp, sum = 0;
	int j = -1;
	scanf("%d", &size);
	int* number = (int*)malloc(sizeof(int) * size);
	if (number == NULL)
		return -1;

	for (i = 0; i < size; i++) {
		scanf("%d", &temp);

		if (temp != 0) {
			++j;
			number[j] = temp;
		}
		else {
			number[j] = 0;
			--j;
		}
	}

	for (i = 0; i <= j; i++)
		sum += number[i];
	printf("%d", sum);

	free(number);

	return 0;
}