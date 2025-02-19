#include <iostream>
#include <string>
using namespace std;

#include <CarrinhoManager.hpp>

int CarrinhoManager::pegueCpf(){
    return cliente->pegueCPF_Cliente();
}

Item_Carrinho* CarrinhoManager::abrirCarrinho(){
    int CPF_Cliente = CarrinhoManager::pegueCpf();
    CarrinhoDao* dao = daoManager.pegueCarrinhoDao();
    return dao->listarItem_Carrinho(CPF_Cliente);
}