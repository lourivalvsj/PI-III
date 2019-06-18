#include <stdio.h>
#include <stdlib.h>
#include "pi3.h"

#include <time.h> //LOGIN
# define tam 1    //LOGIN



	
int main(int argc, char const *argv[]){
	
	//Início do desenvolvimento do projeto!!!
	if(ConectaDB()){
		// Se estabelecer conexão segue aqui!!!
		//  chamando a struct Produto
		int acesso=0;

		CABECALHO (acesso);

		COD_CABECALHO (acesso);

		struct USUARIO Usuario [tam];// nomeando a strct a cima como X
		
		CADASTRA_SENHA (Usuario);
		
		MOSTRA_SENHA_CADASTRADA (Usuario);

		printf("%i\n",COD_CABECALHO (acesso));
	

	}else{
		// Se não estabelecer conexão segue aqui!!!
		printf("\nFalha na conexão com o Banco de Dados...\n");
	}




	return 0;
}