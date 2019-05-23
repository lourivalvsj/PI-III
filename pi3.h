typedef struct TipoFuncionario{
	char Nome[100];
	float Descontos;
	char Telefone[15];
	char Endereco[200];
	char Bairro[30];
	char Cidade[30];
	char UF[3];
} TipoFuncionario;

int ConectaDB();

void InserirFuncionario();

void CadastrarCartaoPonto();

void GerarEspelho();

void GerarHolerite();

void ExibirFuncionario();

void ExibirEspelho();

void ExibirHolerite();