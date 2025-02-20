#include <iostream>
#include <string>
using namespace std;

#include <PedidoManager.hpp>

void PedidoManager::AtualizarStatus(int id_pedido){
    PedidoDao* dao = daoManager.peguePedidoDao();
    dao->confirmarPedido(id_pedido);
}

NotaFiscal* PedidoManager::solicitarNotaFiscal(int id_pedido){
    PedidoDao* dao = daoManager.peguePedidoDao();
    return dao->pegueNotaFiscal(id_pedido);
}