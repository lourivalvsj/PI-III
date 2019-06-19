#include <ctype.h>
#include <stdio.h>
#include <locale.h>
#include <stdio_ext.h>
#include <mysql/mysql.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "pi3.h"

#include <time.h> //LOGIN
# define tam 1    //LOGIN

    MYSQL conexao;
    MYSQL_RES *resp;
    MYSQL_ROW linhas;
    MYSQL_FIELD *campos;
	
int main(int argc, char const *argv[]){
	setlocale(LC_ALL,"");
    char sql[500];
    int i;

    MYSQL conexao;
    MYSQL_RES *resp;
    MYSQL_ROW linhas;
    MYSQL_FIELD *campos;

	//Início do desenvolvimento do projeto!!!
	if(ConectaDB()){
		// Se estabelecer conexão segue aqui!!!
		//  chamando a struct Produto
		int acesso=3;

		struct USUARIO Usuario [tam];// nomeando a strct a cima como X
				
		CABECALHO_2 (acesso);

		CADASTRA_SENHA (Usuario);
		
		MOSTRA_SENHA_CADASTRADA (Usuario);

	}else{
		// Se não estabelecer conexão segue aqui!!!
		printf("\nFalha na conexão com o Banco de Dados...\n");
	}




	return 0;
}