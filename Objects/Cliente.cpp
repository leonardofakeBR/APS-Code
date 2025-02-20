#include "Cliente.h"

int Cliente::pegueId() {
	return Id;
	
}

void Cliente::definaId(int novoId) {
	Id = novoId;
	
}

std::string Cliente::pegueCPF() {
	return CPF;
	
}

void Cliente::definaCPF(std::string cpfCliente) {
	CPF = cpfCliente;
	
}

std::string Cliente::pegueNome() {
	return Nome;
	
}

void Cliente::definaNome(std::string nomeCliente) {
	Nome = nomeCliente;
	
}

std::string Cliente::pegueEmail() {
	return Email;
	
}

void Cliente::definaEmail(std::string emailCliente) {
	Email = emailCliente;
	
}

std::string Cliente::pegueEndereco() {
	return Endereco;
	
}

void Cliente::definaEndereco(std::string enderecoCliente) {
	Endereco = enderecoCliente;
	
}

Carrinho* Cliente::pegueCarrinho() {
	return &carrinho;
	
}

void Cliente::definaCarrinho(Carrinho* novoCarrinho) {
	Carrinho = novoCarrinho;
	
}
