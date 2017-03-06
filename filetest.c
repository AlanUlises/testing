#include <stdio.h>
#include <string.h>

int main(void){
	FILE * file = fopen("values.txt", "r");
	char * token;
	char line[20];

	while(fgets(line, 20, file)){
		for(token = strtok(line, ":"); token && token; token = strtok(NULL, ":\n")){
			printf("%s\n", token);
		}
	}

	fclose(file);

	return 0;
}
