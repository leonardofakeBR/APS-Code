#include <iostream>
#include <string>
using namespace std;

#include <CarrinhoManager.hpp>

Produto* CarrinhoManager::abrirCarrinho(){
    CarrinhoDao* dao = daoManager.pegueCarrinhoDao();
    int CPF_Cliente = dao->pegueCpf();
    Produto* produtos = dao->listarProdutos(CPF_Cliente);
    return produtos;
}