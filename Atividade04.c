#include <stdio.h>
int main(){
	
int n;
int i = 0;

	printf("Digite quantos numeros a sua sequencia tera:\n");
	scanf("%d", &n);
	printf("Digite os numeros da sequencia:\n");

	int vetor[n];

	for(i == 0; i<n; i++){
		scanf("%d", &vetor[i]);
 	}

 	printf("Sua sequencia eh:");

 	i = 0;

 	for(i == 0; i<n; i++){
		printf("%d", vetor[i]);
 	}
 	
 //Verificando se sobe e desce ou desce e sobe

 	if((vetor[0] < vetor[1]) && (vetor[1] > vetor[2])){
 		printf("\nA sequencia eh sobe-e-desce.");
 	}

	else if ((vetor[0] > vetor[1]) && (vetor[1] < vetor[2])){
 		printf("\nA sequencia eh desce-e-sobe.");
 	}

 	else{
 		printf("\nA sequencia nao eh nem desce-e-sobe e nem sobe-e-desce");
 	}

return 0;
}