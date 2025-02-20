#include <NotaFiscal.hpp>

NotaFiscal::NotaFiscal(int id, int numero, string data_Emissao, Pedido* pedido) {
    this->id = id;
    this->numero = numero;
    Data_Emissao = data_Emissao;
    this->pedido = pedido;

}

int NotaFiscal::pegueId() {
    return id;

}

void NotaFiscal::definaId(int id) {
    this->id = id;

}

int NotaFiscal::pegueNumero() {
    return numero;

}

void NotaFiscal::definaNumero(int numero) {
    this->numero = numero;

}

string NotaFiscal::pegueData_Emissao() {
    return Data_Emissao;

}

void NotaFiscal::definaData_Emissao(std::string dataEmissao) {
    Data_Emissao = dataEmissao;

}

Pedido* NotaFiscal::peguePedido() {
    return pedido;

}

void NotaFiscal::definaPedido(Pedido* pedido) {
    this->pedido = pedido;

}

