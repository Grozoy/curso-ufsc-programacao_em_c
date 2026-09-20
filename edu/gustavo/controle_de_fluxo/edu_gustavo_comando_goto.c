#include <stdio.h>

int main() {
	int opcao;
	while (opcao != 5){
		REFAZ: printf("\nEscolha um número entre 1 e 5.\n");
		scanf("%d", &opcao);
		if ((opcao > 5) || (opcao < 1)) goto REFAZ;
		switch (opcao) {
			case 1:
				printf("\n--> Primeira Opção..");
			break;
			case 2:
				printf("\n--> Segunda Opção..");
			break;
			case 3:
				printf("\n--> Terceira Opção..");
			break;
			case 4:
				printf("\n--> Quarta Opção..");
			break;
			case 5:
				printf("\n--> Abandonado..\n");
			break;

		}
	}
	return (0);
}
