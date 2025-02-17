#include <iostream>
#include <string>
using namespace std;

#include <Produto.hpp>

class ProdutoDao {
    private:
        Produto *produto;
        Produto produtos[10] = {
        Produto(1, "Notebook Dell", 3500.00, "Eletrônicos"),
        Produto(2, "Smartphone Samsung", 2000.00, "Eletrônicos"),
        Produto(3, "Tablet Apple", 4000.00, "Eletrônicos"),
        Produto(4, "Fone de Ouvido Bluetooth", 250.00, "Acessórios"),
        Produto(5, "Mochila para Notebook", 150.00, "Acessórios"),
        Produto(6, "Teclado Mecânico", 300.00, "Periféricos"),
        Produto(7, "Mouse Gamer", 200.00, "Periféricos"),
        Produto(8, "Monitor 24 Polegadas", 1200.00, "Monitores"),
        Produto(9, "Impressora Laser", 800.00, "Impressão"),
        Produto(10, "Cadeira Gamer", 1500.00, "Móveis")
        };

    public:
        virtual int pegueCPFCliente(int id_pedido);
        virtual Produto* listar();
};