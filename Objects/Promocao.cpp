#include "Promocao.hpp"

int Promocao::getId_Promocao() {
	return Id_Promocao;
	
}

void Promocao::setId_Promocao(int idPromocao) {
	Id_Promocao = idPromocao;
	
}

double Promocao::getDesconto() {
	return Desconto;
	
}

void Promocao::setDesconto(double desc) {
	Desconto = desc;
	
}

std::string Promocao::getNome() {
	return Nome;
	
}

void Promocao::setNome(std::string novoNome) {
	Nome = novoNome;
	
}
