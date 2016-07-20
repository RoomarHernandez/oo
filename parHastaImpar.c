/*
	UMSNH
	FIE
	Autor: Roberto Martin Hernández Vargas

	El programa pide al usuario que introduzca un n�mero. El programa dividir� dicho n�mero entre 2 e imprimir� el resultado mientras que este sea par, y terminar� cuando el n�mero sea impar.
	
	Compilacion: gcc -o parHastaImpar parHastaImpar.c
	Ejecucion: ./parHastaImpar
*/
#include <stdio.h>

int main(void) {
	int numero;
	fputs("Introduzca un numero entero par: ", stdout);

	scanf("%d", &numero);
	if (!numero) {
		fputs("Error: numero no valido.\n", stderr);
		return -1;
	}

	int i = 1;
	while (numero%2 == 0) {
		printf ("%.3d| %d/2 =", i++, numero);
		numero /=2;
		printf("%d\n", numero);
	}

	printf ("No se puede seguir dividiendo: El numero %d es impar.\n", numero);
	return 0;
}