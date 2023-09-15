#include <stdio.h>

int main(void) {
	char nom[20];

	printf("Bonjour, quel est votre nom ? :");

	scanf("%19s", &nom);
	printf("salut %s", nom);
}

