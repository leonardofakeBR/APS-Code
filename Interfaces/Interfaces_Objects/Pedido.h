#include <string>

class Pedido {
private:
	int id_Pedido;
	double valor_Total;
	std::string status_Do_Pedido;
	std::string status_Do_Pagamento;
	
public:
	int pegueId_Pedido();
	
	void setId_Pedido(int idPedido);
	
	double pegueValor_Total();
	
	void setValor_Total(double valorTotal);
	
	std::string pegueStatus_Do_Pedido();
	
	void setStatus_Do_Pedido(std::string statusPedido);
	
	std::string pegueStatus_Do_Pagamento();
	
	void setStatus_Do_Pagamento(std::string statusPagamento);
	
};
