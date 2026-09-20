#include <stdio.h>

int main() {
	int opcao;
	while (opcao != 5) {
		printf("\nEscolha uma opção entre 1 e 5: ");
		scanf("%d", &opcao);
		if ((opcao > 5) || (opcao < 1)) continue;
		switch (opcao){
			case 1:
				printf("\n --> Primeira opção..");
			break;
			case 2:
				printf("\n --> Segunda opção..");
			break;
			case 3:
				printf("\n --> Terceira opção..");
			break;
			case 4:
				printf("\n --> Quarta opção..");
			break;
			case 5:
				printf("\n --> Abandonando..\n");
			break;

		}
	}	
	return (0);
}
