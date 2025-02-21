#include <string>

class Cliente;
class Item_Carrinho;

class Carrinho {
	
private:
	int Total_De_Itens;
	double Valor_Parcial_Da_Compra;
	Cliente* cliente;
	
public:
	Carrinho(int Total_De_Itens, double Valor_Parcial_Da_Compra, Cliente* cliente);

	int pegueTotal_De_Itens();
	void definaTotal_De_Itens(int);
	
	double pegueValor_Parcial_Da_Compra();
	void definaValor_Parcial_Da_Compra(double);
	
	Cliente* pegueCliente();
	void definaCliente(Cliente*);

};
