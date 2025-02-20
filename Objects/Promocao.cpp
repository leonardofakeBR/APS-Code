#include "Promocao.hpp"

int Promocao::pegueId() {
	return Id;
	
}

void Promocao::definaId(int idPromocao) {
	Id = idPromocao;
	
}

std::string Promocao::pegueNome() {
	return Nome;
	
}

void Promocao::definaNome(std::string novoNome) {
	Nome = novoNome;
	
}

double Promocao::peguePreco_Desconto() {
	return Preco_Desconto;
	
}

void Promocao::definaPreco_Desconto(double desc) {
	Preco_Desconto = desc;
	
}

std::string Promocao::pegueData_Inicio() {
	return Data_Inicio;
	
}

void Promocao::definaData_Inicio(std::string nova_Data_Inicio) {
	Data_Inicio = nova_Data_Inicio;
	
}

std::string Promocao::pegueData_Fim() {
	return Data_Fim;
	
}

void Promocao::definaData_Fim(std::string nova_Data_Fim) {
	Data_Fim = nova_Data_Fim;
	
}

Produto* Promocao::pegueProduto() {
	return produto;
	
}

void Promocao::definaProduto(Produto* prod) {
	produto = prod;
	
}


