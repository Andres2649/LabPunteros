

#include <stdio.h>
#include <stdlib.h>


void calcular(int *num1, int *num2, double *d1, double *d2, double *d3, double **resultado){

	printf("Cálculos realizados: \n");

	/*suma enteros*/
	(*resultado)[0] = *num1 + *num2;
	printf("La suma de enteros: %d + %d = %f\n", *num1, *num2, (*resultado[0]));

	/*Multiplicar doubles*/
	(*resultado)[1] = (*d1) * (*d2) * (*d3);
	printf("La multiplicación de doubles: %f * %f * %f = %f\n", *d1, *d2, *d3, (*resultado)[1]);

	/*Promedio de los doubles*/
	(*resultado)[2] = (*d1 + *d2 + *d3) / 3.0;
	printf("El promedio de los doubles: (%f + %f + %f) / 3 = %f\n", *d1, *d2, *d3, (*resultado)[2]);

}


	int main(){

		int num1 = 5, num2 = 3;
		double d1 = 2.5, d2 = 1.2, d3 = 4.8;

		double *resultados = (double*)malloc(3 * sizeof(double));
		if (resultados == NULL){
			printf("No se puede asignar memoria. \n");
			return 1;
		}

		double **ptr_resultados = &resultados;

		calcular(&num1, &num2, &d1, &d2, &d3, ptr_resultados);

		free(resultados);

		return 0;
}
