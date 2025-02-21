#include <iostream>
#include <string>
#include <ProdutoDao.hpp>

using namespace std;

Produto* ProdutoDao::listar() {
    return produtos;
}