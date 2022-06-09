#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	printf ("==================\n");
	printf ("BANCO INVEST\n");
	printf ("===================\n\n");
}

void menu_principal (){
	setlocale(LC_ALL, "Portuguese");
	printf ("No que podemos ajudar?");
	printf ("\n\n");
	printf("[1] - Consultar Saldo\n");
	printf("[2] - Cartões\n");
	printf("[3] - Investimentos\n");
	printf("[4] - Crédito\n");
	printf("[5] - Outros\n");
	printf("[9] - Fale Conosco\n");
	printf("\n\n");
	
}
int main (void){
	int login, senha, opcao_menu;
	char retorno_primeiro [1], ver_fatura [1], voltar_menu_caso_2 [1], opcao_investimento [1], opcao_outros [1], opcao_fale_conosco [1];
	
	cabecalho ();
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Login: ");
	scanf ("%d", &login);
	printf ("Senha: ");
	scanf ("%d", &senha);
	printf ("\n");
	
	system ("cls");
	
	menu_principal();
	printf ("Por favor, escolha uma das opções acima: ");
	scanf ("%d", &opcao_menu);
	
	switch (opcao_menu){
		case (1) : 
			printf ("\n");
			printf ("Seu saldo é igual a: R$ 0");
			printf ("\n");
			printf ("Retornar? [S/N]: ");
			gets (retorno_primeiro);	
			fflush (stdin);
			getchar ();	
			
			if (retorno_primeiro == "S"){
				system ("cls");
				menu_principal;
			} 
			else {
				printf ("Nós do Banco Invest agradecemos pela preferência");
			}
			break;
			
		case (2) :
			system ("cls");
			printf ("\n");
			printf ("Limite disponível: R$ 1.000,00");
			printf ("\n\n");
			printf ("Posição de 06/06/2022");
			printf ("\n\n");
			printf ("Ver fatura? [S/N]: ");
			gets (ver_fatura);	
			fflush (stdin);

			if (ver_fatura == "S"){
				system ("cls");
				printf("\n");
				printf("Valor total: R$ 0");
				printf("Vencimento dia 13/06/2022");
			}
			else {
				menu_principal;
				gets (voltar_menu_caso_2);
				getchar ();
			return 0;
			}
			break;	
			
		case (3) :
			system ("cls");
			printf ("\n");	
			printf ("Você não possui nenhum investimento no momento");
			printf ("\n");
			printf ("[1] - Aplicações\n");
			printf ("[2] - Resgate\n");
			printf ("[3] - Extrato\n");
			printf ("[4] - Rentabilidade\n");
			printf ("[5] - Perfil do Investidor\n");
			printf ("[6] - Conteúdo\n");
			printf ("[7] - Gerenciador de Investimentos\n");
			printf ("[9] - Retornar\n\n");
			printf ("Digite apenas o número da opção que deseja\n\n");
			scanf ("%d", opcao_investimento);
			getchar ();
			return 0;
			break;
			
		case (4) :
			printf ("\n");
			printf ("Ops, essa opção ainda não está disponível para você\n");
			printf ("Por favor entre em contato com a sua agência");
			break;
			
		case (5) :
			system ("cls");
			printf ("\n");		
			printf ("[1] - Fazer um Pix\n");
			printf ("[2] - Pagar uma conta\n");
			printf ("[3] - Fazer uma transferência\n");
			printf ("[4] - Ver meus comprovanten\n");
			printf ("[9] - Retornar\n\n");
			printf ("Digite apenas o número da opção que deseja\n\n");
			scanf ("%d", opcao_outros);
			getchar ();
			return 0;
			break;
			
		case (9) :
			system ("cls");
			printf ("[1] - Falhas no Sistema\n");	
			printf ("[2] - Ouvidoria\n");
			printf ("[3] - Sugestões\n");
			printf ("[4] - Elogios\n");
			printf ("[9] - Retornar\n\n");
			printf ("Digite apenas o número da opção que deseja\n\n");
			scanf ("%d", opcao_fale_conosco);
		
		default	:
			printf ("\nOpção inválida, por favor tente novamente");
		}
	
	
	return 0;
}
