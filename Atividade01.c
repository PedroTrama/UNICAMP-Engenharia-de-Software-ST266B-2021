#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void primalidade(unsigned long int numero); // Indica se um número natural informado é primo ou não.
//unsigned long int proximoPrimo(long int numero, long int * contador, long int * divisores); // Retorna o próximo número primo em relação a entrada do usuário.
unsigned long int contFinal=0;

void primalidade(unsigned long int input)
{
	long int  divisores = 0, contador;

	if (input == 0 || input == 1)  //Verifica se o valor é igual a 0 ou 1, ou seja, não primo
	{
    	printf("%lu não é primo\nO próximo primo é o número 2\n", input);
    	
		contFinal++;
		printf("contFinal: %lu\n", contFinal);
		
		exit(0);
	}
    else if (input==2){
        printf("%lu é primo\n", input);
		    contFinal++;
		    printf("contFinal: %lu\n", contFinal);
            exit(0);
    }

	for (contador = 2; contador < input; contador++)  //Loop para contabilizar todos os divisores do número informado
	{
		contFinal++;
    	if (input % contador == 0){
        	printf("%lu não é primo\n", input);
            input++;
            contFinal++;      

            for (contador = 2; contador < input; contador++) {
                if(input % contador == 0){
                    input++;
                    contador=2;
                    contFinal++;
                }
            }
            
            printf("O próximo primo é o número %lu\n", input);
            

			contFinal++;
			printf("contFinal: %lu\n", contFinal);

            exit(0);
        }
	}
    printf("%lu é primo\n", input);
		    contFinal++;
		    printf("contFinal: %lu\n", contFinal);
            exit(0);
}
int main()
{
	setlocale (LC_ALL, "");
	int input;
	char restante;
	printf("Insira um numero natural: ");

	/* A condição a seguir verifica se o número é natural. Com o código '%d' no scanf é esperado que
	seja digitado um número inteiro, retornando 1. Também é esperado que o usuário
	insira '\n' ao entrar com o previsto int, caso contrário, não será um número
	inteiro. Por fim, é verificado se o número é positivo. */

	if (scanf ("%d%c", &input, &restante) != 2 || restante != '\n' || input < 0) {
    	printf("Entrada inválida!\n");
		contFinal++;
		printf("contFinal: %lu\n", contFinal);
	}
	else {
    	primalidade(input);
		contFinal++;
	}

	return 0;
}
