#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char* path;	

	for(int i = 0; i < argc; i++) {
		path = getenv(argv[i]);
			
		if(i > 0) {	

			if(path == NULL){
				printf("%s", "La variable d'environnement n'existe pas. \n");
				return 1;
			}
			else{
				printf("Argument %d: %s \n", i, argv[i]);
			}
		}
		else {
			printf("%s", "Erreur, il n'y a pas d'argument. \n");
			return 1;
		}
	}
	return 0;
}

	

