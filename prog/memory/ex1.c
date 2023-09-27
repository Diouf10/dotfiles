#include <stdio.h>
#include <stdlib.h>

int main() {

	int *arr;


	arr = (int*)malloc(4 * sizeof(int));

	if(arr == NULL) {
		printf("Échec de l'allocation de mémoire. \n");
		exit(1);
	}

	int loop;

	for(loop = 0; loop < 10; loop++)
		printf("%d ", loop);

	free(arr);

	return 0;
}

