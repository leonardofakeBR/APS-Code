#include "Promocao.h"

int Promocao::getId_Promocao() {
	return id_Promocao;
	
}

void Promocao::setId_Promocao(int idPromocao) {
	id_Promocao = idPromocao;
	
}

double Promocao::getDesconto() {
	return desconto;
	
}

void Promocao::setDesconto(double desc) {
	desconto = desc;
	
}

std::string Promocao::getNome() {
	return nome;
	
}

void Promocao::setNome(std::string novoNome) {
	nome = novoNome;
	
}
