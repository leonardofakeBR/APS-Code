#include "IProduto.hpp"

void IProduto::setIdProduto(int id_produto){
    this->id_produto = id_produto;
}
int IProduto::getIdProduto(){
    return this->id_produto;
}

void IProduto::setNome(string nome){
    this->nome = nome;
}
string IProduto::getNome(){
    return this->nome;
}

void IProduto::setPreco(float preco){
    this->preco = preco;
}
float IProduto::getPreco(){
    return this->preco;
}

void IProduto::setCategoria(string categoria){
    this->categoria = categoria;
}
string IProduto::getCategoria(){
    return this->categoria;
}

void IProduto::imprime(){
    cout << "ID: " << this->id_produto << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Preço: " << this->preco << endl;
    cout << "Categoria: " << this->categoria << endl;
}