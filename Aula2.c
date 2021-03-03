#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, e=0;
	printf("Digite o primeiro valor: ");
	scanf("%i",&i);
	printf("Digite o segundo valor: ");
	scanf("%i",&e);
	printf("Soma dos valores digitados: %i",i+e);
	//system("pause");
}
