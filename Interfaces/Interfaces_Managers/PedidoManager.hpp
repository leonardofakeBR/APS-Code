#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>
#include "Pedido.hpp"

class PedidoManager {
private:
    DaoManager daoManager;
    Pedido* pedido;

public:
    virtual void atualizarStatusPagamento(int id_pedido);
    virtual NotaFiscal* solicitarNotaFiscal(int id_pedido);
    void enviarConfirmacaoPedidoEmail(int);
    void atualizarStatusPedido(int);
    void exibirConfirmacao();

};
