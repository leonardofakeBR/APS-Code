#include "Item_Estoque.hpp"

Item::Item(int Id, Estoque* estoque, Produto* produto, Fornecedor* fornecedor) {
	this->Id = Id;
	this->estoque = estoque;
	this->produto = produto;
	this->fornecedor = fornecedor;
	
}

int Item::pegueId() {
	return Id;
	
}

void Item::definaId(int novoId) {
	this->Id = novoId;
	
}

Estoque* Item::pegueEstoque() {
	return estoque;
}

void Item::definaEstoque(Estoque* novoEstoque) {
	this->estoque = novoEstoque;
	
}

Produto* Item::pegueProduto() {
	return produto;
	
}

void Item::definaProduto(Produto* novoProd) {
	this->produto = novoProd;
	
}

Fornecedor* Item::pegueFornecedor() {
	return fornecedor;
	
}

void Item::definaFornecedor(Fornecedor* novoFornecedor) {
	this->fornecedor = novoFornecedor;
	
}
