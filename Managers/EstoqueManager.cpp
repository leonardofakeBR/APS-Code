#include <iostream>
#include <string>
using namespace std;

#include <EstoqueManager.hpp>

class EstoqueManager {
    private:
        DaoManager daoManager;
    public:
        void EstoqueManager::informarEstoque(int id_Pedido){
            EstoqueDao* dao = daoManager.pegueEstoqueDao();
            dao->atualizar(int id_Pedido);
        }
};