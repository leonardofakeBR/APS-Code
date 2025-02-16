#include <string>

class Promocao {

private:
	int id_Promocao;
	std::string nome;
	double desconto;
	
public:
	int pegueId_Promocao();
	void setId_Promocao(int idPromocao);
	
	std::string pegueNome();
	void setNome(std::string novoNome);
	
	double pegueDesconto();
	void setDesconto(double desc);
	
};


