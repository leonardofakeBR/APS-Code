#include "Carrinho.hpp"

Carrinho::Carrinho(int Total_De_Itens, double Valor_Parcial_Da_Compra, Cliente* cliente){
	this->Total_De_Itens = Total_De_Itens;
	this->Valor_Parcial_Da_Compra = Valor_Parcial_Da_Compra;
	this->cliente = cliente;
}

int Carrinho::pegueTotal_De_Itens(){
	return Total_De_Itens;
}

void Carrinho::definaTotal_De_Itens(int Total_De_Itens){
	this->Total_De_Itens = Total_De_Itens;
}

double Carrinho::pegueValor_Parcial_Da_Compra(){
	return Valor_Parcial_Da_Compra;
}

void Carrinho::definaValor_Parcial_Da_Compra(double Valor_Parcial_Da_Compra){
	this->Valor_Parcial_Da_Compra = Valor_Parcial_Da_Compra;
}

Cliente* Carrinho::pegueCliente(){
	return cliente;
}

void Carrinho::definaCliente(Cliente* cliente){
	this->cliente = cliente;
}
