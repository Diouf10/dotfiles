#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ligne[1000];

	while(fgets(ligne, sizeof(ligne), stdin) != NULL) {
		printf("%s", ligne);

		fprintf(stderr,"%s", ligne);
	}
	return 0;
		
}
