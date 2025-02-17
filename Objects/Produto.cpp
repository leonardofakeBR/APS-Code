#include "Produto.hpp"

void Produto::definaIdProduto(int id_produto){
    this->id_produto = id_produto;
}
int Produto::pegueIdProduto(){
    return this->id_produto;
}

void Produto::definaNome(string nome){
    this->nome = nome;
}
string Produto::pegueNome(){
    return this->nome;
}

void Produto::definaPreco(float preco){
    this->preco = preco;
}
float Produto::peguePreco(){
    return this->preco;
}

void Produto::definaCategoria(string categoria){
    this->categoria = categoria;
}
string Produto::pegueCategoria(){
    return this->categoria;
}

void Produto::imprime(){
    cout << "ID: " << this->id_produto << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Preço: " << this->preco << endl;
    cout << "Categoria: " << this->categoria << endl;
}