#include <iostream>
#include <string>
using namespace std;

class DaoManager;

class EstoqueDao {
    private:
        DaoManager *dao;

    public:
       virtual bool atualizar(int id_Pedido, string status_do_Pedido);

};