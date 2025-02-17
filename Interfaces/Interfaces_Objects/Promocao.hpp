#include <string>

class Promocao {

private:
	int Id_Promocao;
	std::string Nome;
	double Desconto;
	
public:
	int getId_Promocao();
	void setId_Promocao(int);
	
	std::string getNome();
	void setNome(std::string);
	
	double getDesconto();
	void setDesconto(double);
	
};


