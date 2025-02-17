#include <string>

class Pedido {
private:
	int id_Pedido;
	double valor_Total;
	std::string status_Do_Pedido;
	std::string status_Do_Pagamento;
	
public:
	int pegueId_Pedido();
	
	void definaId_Pedido(int idPedido);
	
	double pegueValor_Total();
	
	void definaValor_Total(double valorTotal);
	
	std::string pegueStatus_Do_Pedido();
	
	void definaStatus_Do_Pedido(std::string statusPedido);
	
	std::string pegueStatus_Do_Pagamento();
	
	void definaStatus_Do_Pagamento(std::string statusPagamento);
	
};
