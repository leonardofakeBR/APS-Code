#include "Pedido.hpp"

Pedido::Pedido(int Id_Pedido, double Valor_Total, bool Status_Pagamento, std::string Status_Pedido, NotaFiscal* notafiscal) {
	this->Id_Pedido = Id_Pedido;
	this->Valor_Total = Valor_Total;
	this->Status_Pagamento = Status_Pagamento;
	this->Status_Pedido = Status_Pedido;
	this->notafiscal = notafiscal;
	
}

int Pedido::pegueId_Pedido() {
	return Id_Pedido;
	
}

void Pedido::definaId_Pedido(int Id_Pedido) {
	this->Id_Pedido = Id_Pedido;
	
}

double Pedido::pegueValor_Total() {
	return Valor_Total;
	
}

void Pedido::definaValor_Total(double Valor_Total) {
	this->Valor_Total = Valor_Total;
	
}

std::string Pedido::pegueStatus_Pedido() {
	return Status_Pedido;
	
}

void Pedido::definaStatus_Pedido(std::string Status_Pedido) {
	this->Status_Pedido = Status_Pedido;
	
}

bool Pedido::pegueStatus_Pagamento() {
	return Status_Pagamento;
	
}

void Pedido::definaStatus_Pagamento(bool Status_Pagamento) {
	this->Status_Pagamento = Status_Pagamento;
	
}

NotaFiscal* Pedido::pegueNotaFiscal() {
	return notafiscal;
	
}

void Pedido::definaNotaFiscal(NotaFiscal* notafiscal) {
	this->notafiscal = notafiscal;
	
}
