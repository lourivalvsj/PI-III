

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

int  CABECALHO_1(); //cabecalho

int  CABECALHO_2(); //cabecalho

void CADASTRA_SENHA(); //usuario

void MOSTRA_SENHA_CADASTRADA (); //usuario

int eh_Qual_Nivel();

int ConectaDB ();

void InserirFuncionario ();

void CadastrarCartaoPonto ();

void GerarEspelho ();

//void GerarHolerite();

void ExibirFuncionario ();

void ExibirEspelho ();

//void ExibirHolerite();