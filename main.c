#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char* chaine="Hello World";
	int i =0, nb_copies = 3, len= strlen(chaine);

	char *copy = (char*) malloc(len*nb_copies);

	for (i ; i<nb_copies; i++){
		memcpy(copy + i*len, chaine, len);
	}
	printf("%s\n", copy);
	free(copy);
	return 0;
}