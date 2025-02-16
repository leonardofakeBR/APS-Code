#include "Produto.hpp"

void Produto::setIdProduto(int id_produto){
    this->id_produto = id_produto;
}
int Produto::pegueIdProduto(){
    return this->id_produto;
}

void Produto::setNome(string nome){
    this->nome = nome;
}
string Produto::pegueNome(){
    return this->nome;
}

void Produto::setPreco(float preco){
    this->preco = preco;
}
float Produto::peguePreco(){
    return this->preco;
}

void Produto::setCategoria(string categoria){
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