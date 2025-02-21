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

Item_Pedido* PedidoDao::pegueItem_Pedido(int id_pedido){
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (itensPedido[i]->peguePedido()->pegueId_Pedido() == id_pedido)
        {
            count++;
        }
    }

    if (count == 0)
    {
        return nullptr;
    }

    Item_Pedido* itens = new Item_Pedido[count];
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        if (itensPedido[i]->peguePedido()->pegueId_Pedido() == id_pedido)
        {
            itens[index] = *itensPedido[i];
            index++;
        }
    }

    return itens;
}