#include <Item_Carrinho.hpp>

Item_Carrinho::Item_Carrinho(int id, int quantidade, Produto* produto, Carrinho* carrinho){
    this->id = id;
    this->quantidade = quantidade;
    this->produto = produto;
    this->carrinho = carrinho;
}

int Item_Carrinho::pegueId(){
    return this->id;
}

void Item_Carrinho::definaId(int id){
    this->id = id;
}

int Item_Carrinho::pegueQuantidade(){
    return this->quantidade;
}

void Item_Carrinho::definaQuantidade(int quantidade){
    this->quantidade = quantidade;
}

Produto* Item_Carrinho::pegueProduto(){
    return this->produto;
}

void Item_Carrinho::definaProduto(Produto* produto){
    this->produto = produto;
}

Carrinho* Item_Carrinho::pegueCarrinho(){
    return this->carrinho;
}

void Item_Carrinho::definaCarrinho(Carrinho* carrinho){
    this->carrinho = carrinho;
}
