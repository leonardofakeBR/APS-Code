#include <Fornecedor.hpp>

void Fornecedor::setCNPJ(int CNPJ){
    this->CNPJ = CNPJ;
}
int Fornecedor::getCNPJ(){
    return this->CNPJ;
}

void Fornecedor::setNome(string nome){
    this->nome = nome;
}
string Fornecedor::getNome(){
    return this->nome;
}

void Fornecedor::setTelefone(string telefone){
    this->telefone = telefone;
}
string Fornecedor::getTelefone(){
    return this->telefone;
}

void Fornecedor::setEmail(string email){
    this->email = email;
}
string Fornecedor::getEmail(){
    return this->email;
}

void Fornecedor::setEndereco(string endereco){
    this->endereco = endereco;
}
string Fornecedor::getEndereco(){
    return this->endereco;
}

void Fornecedor::setContado_Principal(string contado_Principal){
    this->contado_Principal = contado_Principal;
}
string Fornecedor::getContado_Principal(){
    return this->contado_Principal;
}

void Fornecedor::setCondicoes_de_Entrega(string condicoes_de_Entrega){
    this->condicoes_de_Entrega = condicoes_de_Entrega;
}
string Fornecedor::getCondicoes_de_Entrega(){
    return this->condicoes_de_Entrega;
}