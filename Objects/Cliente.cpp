#include "Cliente.h"

int Cliente::pegueId() {
	return Id;
	
}

void Cliente::definaId(int novoId) {
	Id = novoId;
	
}

std::string pegueCPF() {
	return CPF;
	
}

void definaCPF(std::string cpfCliente) {
	CPF = cpfCliente;
	
}

std::string pegueNome() {
	return Nome;
	
}

void definaNome(std::string nomeCliente) {
	Nome = nomeCliente;
	
}

std::string pegueEmail() {
	return Email;
	
}

void definaEmail(std::string emailCliente) {
	Email = emailCliente;
	
}

std::string pegueEndereco() {
	return Endereco;
	
}

void definaEndereco(std::string enderecoCliente) {
	Endereco = enderecoCliente;
	
}
