#include <iostream>
#include <string>
#include <EstoqueDao.hpp>

using namespace std;

void EstoqueDao::atualizar(int id_Pedido){
    

}

void EstoqueDao::subtairItensSolicitados(Item_Pedido* itens){
    for (int i = 0; i < 10; i++)
    {
        if (itens[i].pegueProduto()->pegueIdProduto() == item_Estoque[i]->pegueProduto()->pegueIdProduto())
        {
            int quantidade = itens[i].pegueQuantidade();
            for (int j = 0; j < quantidade; j++)
            {
                if (itens[i].pegueProduto()->pegueIdProduto() == item_Estoque[j]->pegueProduto()->pegueIdProduto())
                {
                    item_Estoque[j] = 0;
                }
            }
            
        };
        
    }

}
