#include <iostream>
#include <string>
#include 
using namespace std;

#include <DaoManager.hpp>
#include "Pedido.hpp"

class PedidoManager {
    private:
    DaoManager daoManager;
    Pedido* pedido;

    public:
    virtual void AtualizarStatus(int id_pedido);
    
    void enviarConfirmacaoDoPedido(int);
    
    

};
