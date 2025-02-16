#include <iostream>
#include <string>
using namespace std;

class Produto;

class ProdutoDao {
    private:
        Produto *produto;

    public:
        virtual int pegueCPFCliente(int id_pedido);
        virtual void listar();
};