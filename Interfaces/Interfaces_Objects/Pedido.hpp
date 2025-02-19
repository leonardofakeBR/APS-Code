#include <string>

class Pedido {
private:
	int Id_Pedido;
	double Valor_Total;
	bool Status_Do_Pagamento;
	std::string Status_Do_Pedido;
	
	
public:
	int pegueId_Pedido();
	
	void definaId_Pedido(int);
	
	double pegueValor_Total();
	
	void definaValor_Total(double);
	
	std::string pegueStatus_Do_Pedido();
	
	void definaStatus_Do_Pedido(std::string);
	
	std::string pegueStatus_Do_Pagamento();
	
	void definaStatus_Do_Pagamento(std::string);
	
};
