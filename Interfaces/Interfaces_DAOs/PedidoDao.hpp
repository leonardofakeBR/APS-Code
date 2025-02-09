#include <iostream>
#include <string>
using namespace std;

class NotaFiscal;
class Pedido;

class PedidoDao {
    private:
        Pedido *pedido;

    public:
        virtual int getCPFCliente(int id_pedido);
        virtual NotaFiscal* getNotaFiscal(int id_pedido);
};