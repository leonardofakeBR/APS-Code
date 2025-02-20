#include <iostream>
#include <string>
#include <PedidoDao.hpp>

using namespace std;

NotaFiscal* PedidoDao::pegueNotaFiscal(int id_pedido){

    for (int i = 0; i < 10; i++)
    {
        if (notas[i]->peguePedido()->pegueId_Pedido() == id_pedido)
        {
            return notas[i];
        }
    }
    

    return nullptr;
}

void PedidoDao::confirmarPedido(int id_pedido){
    for (int i = 0; i < 10; i++)
    {
        if (pedidos[i]->pegueId_Pedido() == id_pedido)
        {
            pedidos[i]->definaStatus_Pagamento(true);
        }
    }
}

Pedido* PedidoDao::peguePedido(int id_pedido){
    for (int i = 0; i < 10; i++)
    {
        if (pedidos[i]->pegueId_Pedido() == id_pedido)
        {
            return pedidos[i];
        }
    }
}