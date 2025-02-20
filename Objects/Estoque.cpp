#include <Estoque.hpp>

Estoque::Estoque(int capacidade, string Localizacao){
    this->capacidade = capacidade;
    this->Localizacao = Localizacao;
}

int Estoque::pegueCapacidade(){
    return capacidade;
}

void Estoque::definaCapacidade(int capacidade){
    this->capacidade = capacidade;
}

string Estoque::pegueLocalizacao(){
    return Localizacao;
}

void Estoque::definaLocalizacao(string Localizacao){
    this->Localizacao = Localizacao;
}
