#include <string>
#include "Cliente.hpp"

class Carrinho {
	
private:
	int Total_De_Itens;
	double Valor_Parcial_Da_Compra;
	Cliente* cliente;
	
public:
	int pegueTotal_De_Itens();
	void definaTotal_De_Itens(int);
	
	double pegueValor_Parcial_Da_Compra();
	void definaValor_Parcial_Da_Compra(double);
	
	Cliente* pegueValor_Parcial_Da_Compra();
	void definaValor_Parcial_Da_Compra(Cliente*);
	
};
