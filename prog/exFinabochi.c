#include <stdio.h>

int main(void) {
	int nombre = 3;
	scanf("%d", &nombre);

	int preseed[2] = {0, 1};
	int pos = 0;
	printf("%d\n%d\n", preseed[0], preseed[1]);

	while(pos != nombre){
		int nombreSuivant = preseed[0]+preseed[1];
		preseed[0] = preseed[1];
		preseed[1] = nombreSuivant;
		printf("%d\n", nombreSuivant);
		++pos;
	}

	return 0;
}
