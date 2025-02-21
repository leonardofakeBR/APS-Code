#include <iostream>
#include <string>
using namespace std;

#include <CarrinhoManager.hpp>

string CarrinhoManager::pegueCpf(){
    return std::to_string(cliente->pegueCPF_Cliente());
}

Item_Carrinho* CarrinhoManager::abrirCarrinho(){
    string CPF_Cliente = CarrinhoManager::pegueCpf();
    CarrinhoDao* dao = daoManager.pegueCarrinhoDao();
    return dao->listarItem_Carrinho(CPF_Cliente);
}