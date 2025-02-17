#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>

class Produto;

class CarrinhoManager {
    private:
    DaoManager daoManager;

    public:
    virtual Produto* abrirCarrinho();
};