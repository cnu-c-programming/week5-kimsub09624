#include <stdio.h>

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	int size = 5;
	int index;

	scanf("%d", &index);

	if(0 <= index && index <= 4) {
		printf("%d\n", arr[index]);
	} else {
		printf("Error\n");
	}
	
	return 0;
}

