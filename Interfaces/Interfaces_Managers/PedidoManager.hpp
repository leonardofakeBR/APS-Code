#include <iostream>
#include <string>
#include 
using namespace std;

#include <DaoManager.hpp>
#include "Pedido.hpp"

class PedidoManager {
    private:
    DaoManager daoManager;
    Pedido* pedido;

    public:
    virtual void AtualizarStatusPagamento(int id_pedido);
    virtual NotaFiscal* solicitarNotaFiscal(int id_pedido);

};
