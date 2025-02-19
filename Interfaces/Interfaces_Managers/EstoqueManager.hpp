#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>

class EstoqueManager {
    private:
        DaoManager daoManager;
    public:
        void informarEstoque(int id_Pedido);
};