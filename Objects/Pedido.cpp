#include "Pedido.h"

int getId_Pedido() {
	return id_Pedido;
	
}
	
void setId_Pedido(int idPedido) {
	id_Pedido = idPedido;
	
}
	
double getValor_Total() {
	return valor_Total;
	
}

void setValor_Total(double valorTotal) {
	valor_Total = valorTotal;
	
}

std::string getStatus_Do_Pedido() {
	return status_Do_Pedido;
	
}

void setStatus_Do_Pedido(std::string statusPedido) {
	status_Do_Pedido = statusPedido;
	
}

std::string getStatus_Do_Pagamento() {
	return status_Do_Pagamento;
	
}

void setStatus_Do_Pagamento(std::string statusPagamento) {
	status_Do_Pagamento = statusPagamento;
	
}
