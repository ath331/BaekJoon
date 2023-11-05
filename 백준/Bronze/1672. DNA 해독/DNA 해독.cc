#include <stdio.h>

int n;
char str[1000005], tmp;

char table[4][4] = {
	{'A', 'C', 'A', 'G'},
	{'C', 'G', 'T', 'A'},
	{'A', 'T', 'C', 'G'},
	{'G', 'A', 'G', 'T'} };

int index(char c)
{
	switch (c)
	{
	case 'A':
		return 0;
	case 'G':
		return 1;
	case 'C':
		return 2;
	case 'T':
		return 3;
	}
}

int main(void)
{
	scanf("%d", &n);
	scanf("%s", str);

	while (n != 1)
	{
		str[n - 2] = table[index(str[n - 2])][index(str[n - 1])];
		n--;
	}

	printf("%c", str[0]);
	return 0;
}