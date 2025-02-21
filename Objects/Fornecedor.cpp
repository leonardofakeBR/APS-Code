#include <Fornecedor.hpp>

void Fornecedor::definaCNPJ(string CNPJ){
    this->CNPJ = CNPJ;
}
string Fornecedor::pegueCNPJ(){
    return this->CNPJ;
}

void Fornecedor::definaNome(string nome){
    this->nome = nome;
}
string Fornecedor::pegueNome(){
    return this->nome;
}

void Fornecedor::definaTelefone(string telefone){
    this->telefone = telefone;
}
string Fornecedor::pegueTelefone(){
    return this->telefone;
}

void Fornecedor::definaEmail(string email){
    this->email = email;
}
string Fornecedor::pegueEmail(){
    return this->email;
}

void Fornecedor::definaEndereco(string endereco){
    this->endereco = endereco;
}
string Fornecedor::pegueEndereco(){
    return this->endereco;
}

void Fornecedor::definaContado_Principal(string contado_Principal){
    this->contado_Principal = contado_Principal;
}
string Fornecedor::pegueContado_Principal(){
    return this->contado_Principal;
}

void Fornecedor::definaCondicoes_de_Entrega(string condicoes_de_Entrega){
    this->condicoes_de_Entrega = condicoes_de_Entrega;
}
string Fornecedor::pegueCondicoes_de_Entrega(){
    return this->condicoes_de_Entrega;
}