#include "Cliente.hpp"

Cliente::Cliente(std::string CPF_Cliente, std::string Nome, std::string Email, std::string Endereco, Carrinho* carrinho){
	this->CPF = CPF_Cliente;
	this->Nome = Nome;
	this->Email = Email;
	this->Endereco = Endereco;
	this->carrinho = carrinho;
}

string Cliente::pegueCPF_Cliente(){
	return CPF;
}

void Cliente::definaCPF_Cliente(string CPF_Cliente){
	this->CPF = CPF_Cliente;
}

std::string Cliente::pegueNome(){
	return Nome;
}

void Cliente::definaNome(std::string Nome){
	this->Nome = Nome;
}

std::string Cliente::pegueEmail(){
	return Email;
}

void Cliente::definaEmail(std::string Email){
	this->Email = Email;
}

std::string Cliente::pegueEndereco(){
	return Endereco;
}

void Cliente::definaEndereco(std::string Endereco){
	this->Endereco = Endereco;
}

Carrinho* Cliente::pegueCarrinho(){
	return carrinho;
}

void Cliente::definaCarrinho(Carrinho* carrinho){
	this->carrinho = carrinho;
}
