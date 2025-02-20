#include <Item_Pedido.hpp>

Item_Pedido::Item_Pedido(){};

Item_Pedido::Item_Pedido(int id, int quantidade, Produto *produto, Pedido *pedido, Fornecedor *fornecedor, Estoque *estoque){
    this->id = id;
    this->quantidade = quantidade;
    this->produto = produto;
    this->pedido = pedido;
    this->fornecedor = fornecedor;
    this->estoque = estoque;
}

int Item_Pedido::pegueId(){
    return id;
}

void Item_Pedido::definaId(int id){
    this->id = id;
}

int Item_Pedido::pegueQuantidade(){
    return quantidade;
}

void Item_Pedido::definaQuantidade(int quantidade){
    this->quantidade = quantidade;
}

Produto *Item_Pedido::pegueProduto(){
    return produto;
}

void Item_Pedido::definaProduto(Produto *produto){
    this->produto = produto;
}

Pedido *Item_Pedido::peguePedido(){
    return pedido;
}

void Item_Pedido::definaPedido(Pedido *pedido){
    this->pedido = pedido;
}

Fornecedor *Item_Pedido::pegueFornecedor(){
    return fornecedor;
}

void Item_Pedido::definaFornecedor(Fornecedor *fornecedor){
    this->fornecedor = fornecedor;
}

Estoque *Item_Pedido::pegueEstoque(){
    return estoque;
}

void Item_Pedido::definaEstoque(Estoque *estoque){
    this->estoque = estoque;
}
