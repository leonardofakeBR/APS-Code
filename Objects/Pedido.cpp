#include "Pedido.h"

int pegueId_Pedido() {
	return id_Pedido;
	
}
	
void setId_Pedido(int idPedido) {
	id_Pedido = idPedido;
	
}
	
double pegueValor_Total() {
	return valor_Total;
	
}

void setValor_Total(double valorTotal) {
	valor_Total = valorTotal;
	
}

std::string pegueStatus_Do_Pedido() {
	return status_Do_Pedido;
	
}

void setStatus_Do_Pedido(std::string statusPedido) {
	status_Do_Pedido = statusPedido;
	
}

std::string pegueStatus_Do_Pagamento() {
	return status_Do_Pagamento;
	
}

void setStatus_Do_Pagamento(std::string statusPagamento) {
	status_Do_Pagamento = statusPagamento;
	
}
