#include "Promocao.h"

int Promocao::pegueId_Promocao() {
	return id_Promocao;
	
}

void Promocao::setId_Promocao(int idPromocao) {
	id_Promocao = idPromocao;
	
}

double Promocao::pegueDesconto() {
	return desconto;
	
}

void Promocao::setDesconto(double desc) {
	desconto = desc;
	
}

std::string Promocao::pegueNome() {
	return nome;
	
}

void Promocao::setNome(std::string novoNome) {
	nome = novoNome;
	
}
