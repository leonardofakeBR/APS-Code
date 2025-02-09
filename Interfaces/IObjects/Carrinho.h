#include <string>

class Carrinho {
	
private:
	std::string total_De_Itens;
	double valor_Parcial_Da_Compra;
	
public:
	std::string getTotal_De_Itens();
	void setTotal_De_Itens(std::string itens);
	
	double getValor_Parcial_Da_Compra();
	void setValor_Parcial_Da_Compra(double valor);
	
};
