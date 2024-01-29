#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE* file; 
	char filename[] = "example.txt";
	
	file = fopen(filename, "w"); 
	if(file == NULL) { 
		perror("Error opening the file"); 
		return EXIT_FAILURE;
	}

	fprintf(file, "Hello, World!"); 
	fclose(file);
	
	file = fopen(filename, "r"); 
	if(file == NULL) { 
		perror("Error opening the file"); 
		return EXIT_FAILURE;
	}

	char line[100]; 
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
		printf("\n");
    }

	fclose(file); 

	return EXIT_SUCCESS;
}