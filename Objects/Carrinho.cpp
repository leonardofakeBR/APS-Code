#include "Carrinho.hpp"

std::string Carrinho::getTotal_De_Itens() {
	return Total_De_Itens;
	
}

void Carrinho::setTotal_De_Itens(std::string itens) {
	Total_De_Itens = itens;
	
}

double Carrinho::getValor_Parcial_Da_Compra() {
	return Valor_Parcial_Da_Compra;
	
}

void Carrinho::setValor_Parcial_Da_Compra(double valor) {
	Valor_Parcial_Da_Compra = valor;
	
}

