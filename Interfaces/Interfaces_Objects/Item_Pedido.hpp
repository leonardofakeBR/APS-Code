#include <iostream>
#include <string>
using namespace std;

#include <Produto.hpp>
#include <Pedido.hpp>
#include <Fornecedor.hpp>
#include <Estoque.hpp>

class Item_Pedido {
private:
    int id;
    int quantidade;
    Produto *produto;
    Pedido *pedido;
    Fornecedor *fornecedor;
    Estoque *estoque;

public:
    Item_Pedido();
    Item_Pedido(int id, int quantidade, Produto *produto, Pedido *pedido, Fornecedor *fornecedor, Estoque *estoque);
    
    int pegueId();
    void definaId(int id);
    
    int pegueQuantidade();
    void definaQuantidade(int quantidade);
    
    Produto *pegueProduto();
    void definaProduto(Produto *produto);
    
    Pedido *peguePedido();
    void definaPedido(Pedido *pedido);
    
    Fornecedor *pegueFornecedor();
    void definaFornecedor(Fornecedor *fornecedor);

    Estoque *pegueEstoque();
    void definaEstoque(Estoque *estoque);
};
