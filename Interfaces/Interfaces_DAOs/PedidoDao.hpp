#include <iostream>
#include <string>
using namespace std;

class NotaFiscal;
class Pedido;

class PedidoDao {
    private:
        Pedido *pedido;

    public:
        virtual int pegueCPFCliente(int id_pedido);
        virtual NotaFiscal* pegueNotaFiscal(int id_pedido);
        virtual void confirmarPagamento(int id_pedido);
        virtual string exibirResultado();
};