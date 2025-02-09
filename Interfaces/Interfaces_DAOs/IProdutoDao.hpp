#include <iostream>
#include <string>
using namespace std;

class Produto;

class IProdutoDao {
    private:
        Produto *produto;
    public:
    virtual int getIdCliente(int id_pedido) = 0;
    virtual void listar() = 0;
};