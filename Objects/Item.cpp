#include "Item.hpp"

int Item::pegueId() {
	return Id;
	
}

void Item::definaId(int novoId) {
	Id = novoId;
	
}

Estoque* Item::pegueEstoque() {
	return &estoque;
}

void Item::definaEstoque(Estoque* novoEstoque) {
	estoque = novoEstoque;
	
}

Produto* Item::pegueProduto() {
	return &produto;
	
}

void Item::definaProduto(Produto* novoProd) {
	Produto = novoProd;
	
}

Fornecedor* Item::pegueFornecedor() {
	return &fornecedor;
	
}

void Item::definaFornecedor(Fornecedor* novoFornecedor) {
	fornecedor = novoFornecedor;
	
}
