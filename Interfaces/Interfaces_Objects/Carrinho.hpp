#include <string>

class Carrinho {
	
private:
	std::string Total_De_Itens;
	double Valor_Parcial_Da_Compra;
	
public:
	std::string getTotal_De_Itens();
	void setTotal_De_Itens(std::string);
	
	double getValor_Parcial_Da_Compra();
	void setValor_Parcial_Da_Compra(double);
	
};
