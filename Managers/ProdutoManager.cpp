#include <iostream>
#include <string>
using namespace std;

#include <ProdutoManager.hpp>

Produto* ProdutoManager::listarProdutos(){
    ProdutoDao* dao = daoManager.pegueProdutoDao();
    return dao->listar();
}