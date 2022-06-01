#include <stdio.h>
#include <string.h>

int main() {
	char alphabet[101], judge;
	int cnt;

	scanf("%s", alphabet);

	for (judge = 'a'; judge <= 'z'; judge++) {
		for (cnt = 0; cnt < strlen(alphabet); cnt++) {
			if (alphabet[cnt] == judge) {
				printf("%d ", cnt);
				break;
			}
		}
		if (cnt == strlen(alphabet))
			printf("-1 ");
	}
	return 0;
}