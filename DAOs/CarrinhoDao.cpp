#include <iostream>
#include <string>
#include <CarrinhoDao.hpp>

using namespace std;

Item_Carrinho* CarrinhoDao::listarItem_Carrinho(int CPF_Cliente) {
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        if (item_Carrinho[i]->pegueCarrinho()->pegueCliente()->pegueCPF_Cliente() == CPF_Cliente) {
            count++;
        }
    }

    if (count == 0) {
        return nullptr; 
    }

    Item_Carrinho* itens = new Item_Carrinho[count];
    int index = 0;

    for (int i = 0; i < 10; i++) {
        if (item_Carrinho[i]->pegueCarrinho()->pegueCliente()->pegueCPF_Cliente() == CPF_Cliente) {
            itens[index] = *item_Carrinho[i]; 
            index++;
        }
    }

    return itens; 
}
