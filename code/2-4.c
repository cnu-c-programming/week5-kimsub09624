#include <stdio.h>

// ascii, '0' = 48, '9' = 57
long my_strtol(char *str, char **endptr) {
	long res = 0;

	while(*str <= 58) {
		res = 10 * res;
		res = res + (*str - 48);
		str++;
	}
	
	*endptr = str;

	return res;
}

int main() {
	char str[] = "2026hello";
	char *end;

	long val = my_strtol(str, &end);

	printf("%ld %s\n", val, end);
	return 0;
}
