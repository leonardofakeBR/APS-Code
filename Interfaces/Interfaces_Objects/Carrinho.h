#include <string>

class Carrinho {
	
private:
	std::string total_De_Itens;
	double valor_Parcial_Da_Compra;
	
public:
	std::string pegueTotal_De_Itens();
	void definaTotal_De_Itens(std::string itens);
	
	double pegueValor_Parcial_Da_Compra();
	void definaValor_Parcial_Da_Compra(double valor);
	
};
