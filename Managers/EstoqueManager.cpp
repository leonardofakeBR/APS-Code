#include <iostream>
#include <string>
using namespace std;

#include <EstoqueManager.hpp>

class EstoqueManager {
    private:
        DaoManager daoManager;
    public:
        void EstoqueManager::informarEstoque(int id_Pedido){
            EstoqueDao* estoqueDao = daoManager.pegueEstoqueDao();
            PedidoDao* pedidoDao = daoManager.peguePedidoDao();
            Pedido* pedido = pedidoDao->peguePedido(id_Pedido);
            estoqueDao->subtairItensSolicitados(pedido);
        }
};