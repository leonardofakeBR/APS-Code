#include <string>

class Promocao {

private:
	int id_Promocao;
	std::string nome;
	double desconto;
	
public:
	int pegueId_Promocao();
	void definaId_Promocao(int idPromocao);
	
	std::string pegueNome();
	void definaNome(std::string novoNome);
	
	double pegueDesconto();
	void definaDesconto(double desc);
	
};


