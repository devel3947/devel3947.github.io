#include <stdio.h>
#include <string.h>

int main() {
	char s[2890] = "";
	char arr[2890] = "";
	char temp[4] = "";
	int start, end=0, i;

	scanf("%s", s);

	start = s[0] - '0';
	for (i = 0;;i++) {
		sprintf(temp, "%d", start + i);
		strcat(arr, temp);
		if (strlen(arr) >= strlen(s)) {
			if (strcmp(s, arr) == 0) {
				end = start + i;
				break;
			}
			else {
				strcpy(arr, "");
				start = (s[0] - '0') * 10 + s[1] - '0';
				for (i = 0;;i++) {
					sprintf(temp, "%d", start + i);
					strcat(arr, temp);
					if (strlen(arr) >= strlen(s)) {
						if (strcmp(arr, s) == 0) {
							end = start + i;
							break;
						}
						else {
							strcpy(arr, "");
							start = (s[0] - '0') * 100 + (s[1] - '0') * 10 + s[2] - '0';
							for (i = 0;;i++) {
								sprintf(temp, "%d", start + i);
								strcat(arr, temp);
								if (strlen(arr) >= strlen(s)) {
									if (strcmp(arr, s) == 0) {
										end = start + i;
										break;
									}
								}
							}
						}
					}
					else
						continue;
					break;
				}
			}
		}
		else
			continue;
		break;
	}
	printf("%d %d", start, end);
	return 0;
}