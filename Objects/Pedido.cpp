#include "Pedido.hpp"

Pedido::Pedido(int Id_Pedido, double Valor_Total, bool Status_Do_Pagamento, std::string Status_Do_Pedido, NotaFiscal* notafiscal) {
	this->Id_Pedido = Id_Pedido;
	this->Valor_Total = Valor_Total;
	this->Status_Do_Pagamento = Status_Do_Pagamento;
	this->Status_Do_Pedido = Status_Do_Pedido;
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

std::string Pedido::pegueStatus_Do_Pedido() {
	return Status_Do_Pedido;
	
}

void Pedido::definaStatus_Do_Pedido(std::string Status_Do_Pedido) {
	this->Status_Do_Pedido = Status_Do_Pedido;
	
}

bool Pedido::pegueStatus_Do_Pagamento() {
	return Status_Do_Pagamento;
	
}

void Pedido::definaStatus_Do_Pagamento(bool Status_Do_Pagamento) {
	this->Status_Do_Pagamento = Status_Do_Pagamento;
	
}

NotaFiscal* Pedido::pegueNotaFiscal() {
	return notafiscal;
	
}

void Pedido::definaNotaFiscal(NotaFiscal* notafiscal) {
	this->notafiscal = notafiscal;
	
}
