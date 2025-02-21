#include <iostream>
#include <string>
using namespace std;

#include "Pedido.hpp"
#include "NotaFiscal.hpp"
#include "Item_Pedido.hpp"
#include "Estoque.hpp"
#include "Fornecedor.hpp"
#include "Produto.hpp"


class PedidoDao {
    private:
        Pedido *pedido;
        Pedido* pedidos[10];
        NotaFiscal* notas[10];
        Item_Pedido* itensPedido[10];

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

            Estoque* estoques[10] = {
                new Estoque(1, "a"),
                new Estoque(2, "b"),
                new Estoque(3, "c"),
                new Estoque(4, "d"),
                new Estoque(5, "e"),
                new Estoque(6, "f"),
                new Estoque(7, "g"),
                new Estoque(8, "h"),
                new Estoque(9, "i"),
                new Estoque(10, "j")
            };

            Fornecedor* fornecedores[10] = {
                new Fornecedor("45.586.460/0001-81", "compania a", "999999999", "a@gmail.com", "avenida a", "email", "fazer sol 0-0"),
                new Fornecedor("45.586.460/0001-82", "compania b", "999999998", "b@gmail.com", "avenida b", "email", "fazer sol 0-1"),
                new Fornecedor("45.586.460/0001-83", "compania c", "999999997", "c@gmail.com", "avenida c", "email", "fazer sol 0-2"),
                new Fornecedor("45.586.460/0001-84", "compania d", "999999996", "d@gmail.com", "avenida d", "email", "fazer sol 0-3"),
                new Fornecedor("45.586.460/0001-85", "compania e", "999999995", "e@gmail.com", "avenida e", "email", "fazer sol 0-4"),
                new Fornecedor("45.586.460/0001-86", "compania f", "999999994", "f@gmail.com", "avenida f", "email", "fazer sol 0-5"),
                new Fornecedor("45.586.460/0001-87", "compania g", "999999993", "g@gmail.com", "avenida g", "email", "fazer sol 0-6"),
                new Fornecedor("45.586.460/0001-88", "compania h", "999999992", "h@gmail.com", "avenida h", "email", "fazer sol 0-7"),
                new Fornecedor("45.586.460/0001-89", "compania i", "999999991", "i@gmail.com", "avenida i", "email", "fazer sol 0-8"),
                new Fornecedor("45.586.460/0001-90", "compania j", "999999990", "j@gmail.com", "avenida j", "email", "fazer sol 0-9")
            };

            Produto* produtos[10] = {
                new Produto(1, "Notebook Dell", 3500.00, "Eletrônicos"),
                new Produto(2, "Smartphone Samsung", 2000.00, "Eletrônicos"),
                new Produto(3, "Tablet Apple", 4000.00, "Eletrônicos"),
                new Produto(4, "Fone de Ouvido Bluetooth", 250.00, "Acessórios"),
                new Produto(5, "Mochila para Notebook", 150.00, "Acessórios"),
                new Produto(6, "Teclado Mecânico", 300.00, "Periféricos"),
                new Produto(7, "Mouse Gamer", 200.00, "Periféricos"),
                new Produto(8, "Monitor 24 Polegadas", 1200.00, "Monitores"),
                new Produto(9, "Impressora Laser", 800.00, "Impressão"),
                new Produto(10, "Cadeira Gamer", 1500.00, "Móveis")
                };

            Item_Pedido* itensPedido[10] = {
                new Item_Pedido(1, 10, produtos[0], pedidos[0], fornecedores[0], estoques[0]),
                new Item_Pedido(2, 20, produtos[1], pedidos[1], fornecedores[1], estoques[1]),
                new Item_Pedido(3, 30, produtos[2], pedidos[2], fornecedores[2], estoques[2]),
                new Item_Pedido(4, 40, produtos[3], pedidos[3], fornecedores[3], estoques[3]),
                new Item_Pedido(5, 50, produtos[4], pedidos[4], fornecedores[4], estoques[4]),
                new Item_Pedido(6, 60, produtos[5], pedidos[5], fornecedores[5], estoques[5]),
                new Item_Pedido(7, 70, produtos[6], pedidos[6], fornecedores[6], estoques[6]),
                new Item_Pedido(8, 80, produtos[7], pedidos[7], fornecedores[7], estoques[7]),
                new Item_Pedido(9, 90, produtos[8], pedidos[8], fornecedores[8], estoques[8]),
                new Item_Pedido(10, 100, produtos[9], pedidos[9], fornecedores[9], estoques[9])
            };
        }
    
        virtual int pegueCPFCliente(int id_pedido);
        virtual Item_Pedido* pegueItem_Pedido(int id_pedido);
        virtual NotaFiscal* pegueNotaFiscal(int id_pedido);
        virtual void confirmarPagamento(int id_pedido);
        virtual void confirmarPedido(int id_pedido);
        virtual string exibirResultado();
        virtual void exibirConfirmacao();
};