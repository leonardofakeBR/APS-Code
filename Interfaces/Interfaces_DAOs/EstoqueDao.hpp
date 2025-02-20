#include <iostream>
#include <string>
using namespace std;


#include "Pedido.hpp"
class DaoManager;


class EstoqueDao {
    private:
        DaoManager *dao;

    public:
       virtual void atualizar(int id_Pedido);
       virtual void subtairItensSolicitados(Pedido* pedido);

};