#include <string>

class Promocao {

private:
	int Id;
	std::string Nome;
	double Preco_Desconto;
	std::string Data_Inicio;
	std::string Data_Fim;
	Produto* produto;
	
public:
	int pegueId();
	void definaId(int);
	
	std::string pegueNome();
	void definaNome(std::string);
	
	double peguePreco_Desconto();
	void definaDesconto(double);
	
	std::string pegueData_Inicio();
	void definaData_Inicio(std::string);
	
	std::string pegueData_Fim();
	void definaData_Fim(std::string);
	
	Produto* pegueProduto();
	void definaProduto(Produto*);
	
};


