#include <iostream>
#include <string>
using namespace std;

#include "Pedido.hpp"
#include "NotaFiscal.hpp"


class PedidoDao {
    private:
        Pedido *pedido;
        Pedido* pedidos[10];
        NotaFiscal* notas[10];
        Item_Pedido* item_pedido[10];

    public:
        // Construtor
        PedidoDao() {
            // Inicializa os pedidos
            pedidos[0] = new Pedido(1, 100.0, "Enviado", "Pago", nullptr);
            pedidos[1] = new Pedido(2, 200.0, "Pendente", "Pendente", nullptr);
            pedidos[2] = new Pedido(3, 300.0, "Enviado", "Pago", nullptr);
            pedidos[3] = new Pedido(4, 400.0, "Cancelado", "Estornado", nullptr);
            pedidos[4] = new Pedido(5, 500.0, "Enviado", "Pago", nullptr);
            pedidos[5] = new Pedido(6, 600.0, "Pendente", "Pendente", nullptr);
            pedidos[6] = new Pedido(7, 700.0, "Enviado", "Pago", nullptr);
            pedidos[7] = new Pedido(8, 800.0, "Cancelado", "Estornado", nullptr);
            pedidos[8] = new Pedido(9, 900.0, "Enviado", "Pago", nullptr);
            pedidos[9] = new Pedido(10, 1000.0, "Pendente", "Pendente", nullptr);
    
            // Inicializa as notas fiscais
            notas[0] = new NotaFiscal(1, 1001, "2025-02-19", pedidos[0]);
            notas[1] = new NotaFiscal(2, 1002, "2025-02-19", pedidos[1]);
            notas[2] = new NotaFiscal(3, 1003, "2025-02-19", pedidos[2]);
            notas[3] = new NotaFiscal(4, 1004, "2025-02-19", pedidos[3]);
            notas[4] = new NotaFiscal(5, 1005, "2025-02-19", pedidos[4]);
            notas[5] = new NotaFiscal(6, 1006, "2025-02-19", pedidos[5]);
            notas[6] = new NotaFiscal(7, 1007, "2025-02-19", pedidos[6]);
            notas[7] = new NotaFiscal(8, 1008, "2025-02-19", pedidos[7]);
            notas[8] = new NotaFiscal(9, 1009, "2025-02-19", pedidos[8]);
            notas[9] = new NotaFiscal(10, 1010, "2025-02-19", pedidos[9]);
    
            // Associa as notas fiscais aos pedidos
            for (int i = 0; i < 10; i++) {
                pedidos[i]->definaNotaFiscal(notas[i]);
            }
        }
    
        virtual int pegueCPFCliente(int id_pedido);
        virtual Pedido* peguePedido(int id_pedido);
        virtual NotaFiscal* pegueNotaFiscal(int id_pedido);
        virtual void confirmarPagamento(int id_pedido);
        virtual void confirmarPedido(int id_pedido);
        virtual string exibirResultado();
};