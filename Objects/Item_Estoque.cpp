#include "Item_Estoque.hpp"

Item_Estoque::Item_Estoque(int Id, Estoque* estoque, Produto* produto, Fornecedor* fornecedor) {
	this->Id = Id;
	this->estoque = estoque;
	this->produto = produto;
	this->fornecedor = fornecedor;
	
}

int Item_Estoque::pegueId() {
	return Id;
	
}

void Item_Estoque::definaId(int novoId) {
	this->Id = novoId;
	
}

Estoque* Item_Estoque::pegueEstoque() {
	return estoque;
}

void Item_Estoque::definaEstoque(Estoque* novoEstoque) {
	this->estoque = novoEstoque;
	
}

Produto* Item_Estoque::pegueProduto() {
	return produto;
	
}

void Item_Estoque::definaProduto(Produto* novoProd) {
	this->produto = novoProd;
	
}

Fornecedor* Item_Estoque::pegueFornecedor() {
	return fornecedor;
	
}

void Item_Estoque::definaFornecedor(Fornecedor* novoFornecedor) {
	this->fornecedor = novoFornecedor;
	
}
