#include <string>

class Pedido {
private:
	int id_Pedido;
	double valor_Total;
	std::string status_Do_Pedido;
	std::string status_Do_Pagamento;
	
public:
	int getId_Pedido();
	
	void setId_Pedido(int idPedido);
	
	double getValor_Total();
	
	void setValor_Total(double valorTotal);
	
	std::string getStatus_Do_Pedido();
	
	void setStatus_Do_Pedido(std::string statusPedido);
	
	std::string getStatus_Do_Pagamento();
	
	void setStatus_Do_Pagamento(std::string statusPagamento);
	
};
