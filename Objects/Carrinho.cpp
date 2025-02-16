#include "Carrinho.h"

std::string Carrinho::pegueTotal_De_Itens() {
	return total_De_Itens;
	
}

void Carrinho::setTotal_De_Itens(std::string itens) {
	total_De_Itens = itens;
	
}

double Carrinho::pegueValor_Parcial_Da_Compra() {
	return valor_Parcial_Da_Compra;
	
}

void Carrinho::setValor_Parcial_Da_Compra(double valor) {
	valor_Parcial_Da_Compra = valor;
	
}

