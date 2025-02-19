#include <string>

class Promocao {

private:
	int Id_Promocao;
	std::string Nome;
	double Desconto;
	
public:
	int pegueId_Promocao();
	void definaId_Promocao(int);
	
	std::string pegueNome();
	void definaNome(std::string);
	
	double pegueDesconto();
	void definaDesconto(double);
	
};


