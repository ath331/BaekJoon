#include <stdio.h>
#include <string.h>

int main() {
	char input[5][15];

	for (int i = 0; i < 5; i++) {
		scanf("%s", input[i]);
	}

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (j < strlen(input[i])) {
				printf("%c", input[i][j]);
			}
		}
	}

	return 0;
}