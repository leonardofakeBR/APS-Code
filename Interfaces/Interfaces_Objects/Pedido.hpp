#include <string>

class Pedido {
private:
	int Id_Pedido;
	double Valor_Total;
	bool Status_Do_Pagamento;
	std::string Status_Do_Pedido;
	
	
public:
	int getId_Pedido();
	
	void setId_Pedido(int);
	
	double getValor_Total();
	
	void setValor_Total(double);
	
	std::string getStatus_Do_Pedido();
	
	void setStatus_Do_Pedido(std::string);
	
	std::string getStatus_Do_Pagamento();
	
	void setStatus_Do_Pagamento(std::string);
	
};
