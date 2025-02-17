#include "Pedido.hpp"

int getId_Pedido() {
	return Id_Pedido;
	
}
	
void setId_Pedido(int idPedido) {
	Id_Pedido = idPedido;
	
}
	
double getValor_Total() {
	return Valor_Total;
	
}

void setValor_Total(double valorTotal) {
	Valor_Total = valorTotal;
	
}

std::string getStatus_Do_Pedido() {
	return Status_Do_Pedido;
	
}

void setStatus_Do_Pedido(std::string statusPedido) {
	Status_Do_Pedido = statusPedido;
	
}

std::string getStatus_Do_Pagamento() {
	return Status_Do_Pagamento;
	
}

void setStatus_Do_Pagamento(std::string statusPagamento) {
	Status_Do_Pagamento = statusPagamento;
	
}
