#include <iostream>
#include <string>
using namespace std;

class DaoManager;

class CarrinhoDao {
    private:
        DaoManager *dao;

    public:
       virtual int pegueCpf();
       virtual Produto* listarProdutos(int CPF_Cliente);
};