#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>

class ProdutoManager {
    private:
    DaoManager daoManager;

    public:
    Produto* listarProdutos();

};