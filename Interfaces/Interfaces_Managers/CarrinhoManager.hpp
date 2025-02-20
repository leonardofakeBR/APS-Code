#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>
#include <Cliente.hpp>
#include <Produto.hpp>


class CarrinhoManager {
    private:
    DaoManager daoManager;
    Cliente* cliente;

    public:
    CarrinhoManager(Cliente* cliente){
        this->cliente = cliente;

    }

    virtual Item_Carrinho* abrirCarrinho();
    virtual string pegueCpf();
};