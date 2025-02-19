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