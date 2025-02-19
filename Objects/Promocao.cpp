#include "Promocao.hpp"

int Promocao::pegueId_Promocao() {
	return id_Promocao;
	
}

void Promocao::definaId_Promocao(int idPromocao) {
	id_Promocao = idPromocao;
	
}

double Promocao::pegueDesconto() {
	return desconto;
	
}

void Promocao::definaDesconto(double desc) {
	desconto = desc;
	
}

std::string Promocao::pegueNome() {
	return nome;
	
}

void Promocao::definaNome(std::string novoNome) {
	nome = novoNome;
	
}
