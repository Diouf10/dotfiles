#include <stdio.h>
#include <stdlib.h>

int* memoire(int n) {
	int* arr = (int*)malloc(n* sizeof(int));

	if(arr == NULL){
		printf("Échec de l'allocation de mémoire.\n");
		exit(1);
	}

	return(arr);
}


void libererTableau(int* arr) {
	free(arr);
}

int main() {
	int n = 5;
	int* arr = memoire(n);

	for(int i = 0; i < n; i++) {
		arr[i] = i * 2;
	}

	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	libererTableau(arr);

	return 0;
}
