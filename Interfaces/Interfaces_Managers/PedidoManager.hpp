#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>

class PedidoManager {
    private:
    DaoManager daoManager;

    public:
    virtual void AtualizarStatus(int id_pedido);
    virtual NotaFiscal* solicitarNotaFiscal(int id_pedido);

};