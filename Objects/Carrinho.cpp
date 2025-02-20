#include "Carrinho.hpp"

int Carrinho::pegueTotal_De_Itens() {
	return total_De_Itens;
	
}

void Carrinho::definaTotal_De_Itens(int itens) {
	Total_De_Itens = itens;
	
}

double Carrinho::pegueValor_Parcial_Da_Compra() {
	return Valor_Parcial_Da_Compra;
	
}

void Carrinho::definaValor_Parcial_Da_Compra(double valor) {
	Valor_Parcial_Da_Compra = valor;
	
}

Cliente* Carrinho::pegueCliente() {
	return &cliente;
	
}

void Carrinho::definaCliente(Cliente* novo_cliente) {
	cliente = novo_cliente;
	
}

