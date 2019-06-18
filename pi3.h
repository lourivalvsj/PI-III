struct USUARIO {
		int id; 
		char nome[50];
		char login [20];
		char senha [15];
		int nivel;
};

typedef struct TipoFuncionario{
	char Nome[100];
	float Descontos;
	char Telefone[15];
	char Endereco[200];
	char Bairro[30];
	char Cidade[30];
	char UF[3];
} TipoFuncionario;

void  CABECALHO (); //cabecalho

int COD_CABECALHO (); //cabecalho

void CADASTRA_SENHA(); //usuario

void MOSTRA_SENHA_CADASTRADA (); //usuario

int ConectaDB ();

void InserirFuncionario ();

void CadastrarCartaoPonto ();

void GerarEspelho ();

//void GerarHolerite();

void ExibirFuncionario ();

void ExibirEspelho ();

//void ExibirHolerite();