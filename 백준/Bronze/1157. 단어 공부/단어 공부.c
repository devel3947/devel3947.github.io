#include <stdio.h>
#include <ctype.h>
#include <string.h>

int FindAlphabet(char);
char word[1000001];

int main() {
	int max = 0, temp = 0;
	char alpha, result;
	gets(word);

	for (alpha = 'A'; alpha <= 'Z'; alpha++) {
		temp = FindAlphabet(alpha);
		if (temp > max) {
			max = temp;
			result = alpha;
		}
		else if (temp == max)
			result = '?';
	}
	printf("%c", result);
	return 0;
}

int FindAlphabet(char c) {
	int count=0, i = 0;
	while(word[i] != '\0') {
		if (c == word[i] || c==word[i]-32)
			++count;
        ++i;
	}
	return count;
}