#include <string>

class Promocao {

private:
	int id_Promocao;
	std::string nome;
	double desconto;
	
public:
	int getId_Promocao();
	void setId_Promocao(int idPromocao);
	
	std::string getNome();
	void setNome(std::string novoNome);
	
	double getDesconto();
	void setDesconto(double desc);
	
};


