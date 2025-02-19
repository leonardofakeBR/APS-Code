#include <iostream>
#include <string>
using namespace std;

class DaoManager;

class EstoqueDao {
    private:
        DaoManager *dao;

    public:
       virtual void atualizar(int id_Pedido);

};