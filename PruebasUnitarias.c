#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/**
 * Calcula y regresa la media aritmetica
 */

double mediaAritmetica(const int [], int);

/**
 * Calcula y regresa la raiz enesima = x ^ (1/n)
 */

double raizEnesima(double, int);

/**
 * Usa raizEnesima para calcular y regresar la media geometrica
 */
double mediaGeometrica(const int [], int);

/**
 * Este metodo no esta implementado
 */
double mediaArmonica(const int [], int);

int main(void){
	FILE * file = fopen("values.txt", "r");
	char * token;
	char line[20];	
	int vals[5];
	double media = 0;
	int array_length = 0;

	while(fgets(line, 20, file)){
		int i = 0;

		for(token = strtok(line, ":"); token && token; token = strtok(NULL, ":\n")){
			vals[i] = atoi(token);
			i++;
		}
	}

	fclose(file);

	array_length = sizeof(vals) / sizeof(vals[0]);

	media = mediaGeometrica(vals, array_length);
	
	printf("%f\n", media);
	
	return 0;
}

double mediaAritmetica(const int vals[], int array_length){
	double media = 0;
	int i;

	for(i = 0; i < array_length; i++)
		media += vals[i];
	
	return media / array_length;
}

double raizEnesima(double x, int n){
	return pow(x, 1/(double)n);
}

double mediaGeometrica(const int vals[], int array_length){
	double media_geometrica = 1;
	int i;

	for(i = 0; i < array_length; i++)
		media_geometrica *= vals[i];
	
	return raizEnesima(media_geometrica, array_length);			
}

double mediaArmonica(const int vals[], int array_length){ 
	return 0;
}
