#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
# define tam 1

#include "pi3.h"
//  teste
int ConectaDB(){
	MYSQL conexao;
    MYSQL_RES *resp;
    MYSQL_ROW linhas;
    MYSQL_FIELD *campos;

    mysql_init(&conexao);

    if ( !mysql_real_connect(&conexao, "localhost", "root", "123456", "pi3", 0, NULL, 0) )
    	return 0; //Se falhar retorna 0

    return 1; //Se funcionar retorna 1
}


void CABECALHO(int acesso){
	
		//int opcao=0;
		system("clear");
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx       SISTEMA      xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx  ESPELHO DE PONTO  xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n" );
		printf(" xxxxxxxxxxxxxxxxxxxxxxxxxxxx                    xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n\n" );
}

int COD_CABECALHO(int ACESSO){
		printf("              Digite as opção abaixo para prosceguir no sistema\n");
		printf("            (1) - acessar o menu  (2) - Cadastra senha  (3) - Sair \n" );
		scanf("%i",& ACESSO);
		return ACESSO;
}

void CADASTRA_SENHA(struct USUARIO X[]){
	int i;
		system("clear");
		for(i=0; i<tam;i++){
	        fflush(stdin);
	        setbuf(stdin,NULL);//LIMPA O BUFFER
			printf("ACESSO AO SISTEMA  CONTROLE PONTO: %i\n", i+1);
			printf("DIGITE O SEU NOME COMPLETO:   ");
			fgets(X[i].nome,50,stdin);
			setbuf(stdin,NULL);//LIMPA O BUFFER

			printf("DIGITE O LOGIN A SER UTILIZADO:  ");
			fgets(X[i].login,20,stdin);
			setbuf(stdin,NULL);//LIMPA O BUFFER

			printf("DIGITE A SENHA A SER UTILIZADA:  ");
			fgets(X[i].senha,15,stdin);
			fflush(stdin);

			printf("QUAL NIVEL DE ACESSO VOCE PERTENCE:\n (1) TI (2) RH (3) EMPREGADO ");
			scanf ("%i", &X[i].nivel);
		}

}

	
// Escrita

void MOSTRA_SENHA_CADASTRADA (struct USUARIO X[]){
	int i;
		for(i=0; i<tam;i++){
			printf("\n\nACESSO AO SISTEMA  CONTROLE PONTO: %i\n", i+1);
			printf("NOME COMPLETO CADASTRADO: %s\n",X[i].nome);
			printf ("LOGIN CADASTRADO: %s\n",X[i].login);
			printf ("SENHA CADASTRADA: %s\n", X[i].senha);
			printf ("NIVEL CADASTRADO: %i\n", X[i].nivel);		
		}
}

void InserirFuncionario(){

}

void CadastrarCartaoPonto(){

}

void GerarEspelho(){

}

void GerarHolerite(){

}

void ExibirFuncionario(){

}

void ExibirEspelho(){

}

void ExibirHolerite(){

}