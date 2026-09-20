#include <stdio.h>

int main() {
	int ano = 365, ano_bis = 366;
	int mes_30 = 30, mes_31 = 31;
	int fev_28 = 28, fev_29 = 29;
	int vetor_dias_por_mes[12];
	int tamanho_vetor = 0;
	int repetir = 0;
	int dia = 1, soma_dias = 0, index;
	int dia_input, mes_input, ano_input;
	
	
	do {
	printf("Digite uma data, começando por dia: ");
	scanf("%d", &dia_input);	
	if (dia_input < 1 || dia_input > 31) repetir = 1;

	printf("\nAgora o mês: ");
	scanf("%d", &mes_input);
	if (mes_input < 1 || mes_input > 12) repetir = 1;
	if ((dia_input > 29) && (mes_input == 2) || (dia_input == 31 && (mes_input == 4 || mes_input == 6 || mes_input == 9 || mes_input == 11))) repetir = 1;
			
	printf("\nAgora o ano: ");
	scanf("%d", &ano_input);	
	if ((dia_input == 29) && (ano_input % 4) && (ano_input % 400)) repetir = 1;
	else repetir = 0;	
	} while (repetir);

	/* Condições para verificar se o ano é bisexto. Soma os dias com fev_29 até o mês informado.  */
	if (!(ano_input % 4) && (ano_input % 100) || !(ano_input % 400)) {
		printf("Ano bisexto!\n");
		for (index=0; index < mes_input; index++){
			/* Caso Abril, Junho, Setembro ou Novembro */
			if (index == 3 || index == 5 || index == 8 || index == 10) 
				vetor_dias_por_mes[index] = mes_30; 
			/* Se for Fevereiro */
			else if (index == 1) 
				vetor_dias_por_mes[index] = fev_29;
			/* Se for qualquer outro mês */
			else
				vetor_dias_por_mes[index] = mes_31;
		}
	}				
	/* Caso o ano não seja bisexto. Soma os dias com fev_28 até o mês informado */
	else {
		printf("Ano não bisexto!\n");
		for (index=0; index < mes_input; index++){
			/* Caso Abril, Junho, Setembro ou Novembro */
			if (index == 3 || index == 5 || index == 8 || index == 10) 
				vetor_dias_por_mes[index] = mes_30; 
			/* Se for Fevereiro */
			else if (index == 1) 
				vetor_dias_por_mes[index] = fev_28;
			/* Se for qualquer outro mês */
			else
				vetor_dias_por_mes[index] = mes_31;
		}
	}
	
	tamanho_vetor = sizeof(vetor_dias_por_mes) / sizeof(vetor_dias_por_mes[0]);
	
	
	/* Muda para zero o ultimo mês do vetor, para somar os dias_input */
	for (index=mes_input - 1; index <= tamanho_vetor; index++) vetor_dias_por_mes[index] = 0 ;

	for (index=0; index <= tamanho_vetor; index++) {
		soma_dias += vetor_dias_por_mes[index];	
	}
	/* Somando dias ao total */
	soma_dias += dia_input;
	
	/* Prompt final */
	printf("\nA data informada, corresponde a %d dias neste ano.\n", soma_dias);

	return (0);

}
	


