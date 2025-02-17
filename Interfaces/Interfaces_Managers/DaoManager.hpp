#include <iostream>
#include <string>
using namespace std;

#include <EstoqueDao.hpp>
#include <PedidoDao.hpp>
#include <ProdutoDao.hpp>
#include <CarrinhoDao.hpp>

class DaoManager{
    private:
        EstoqueDao *estoqueDao;
        PedidoDao *pedidoDao;
        ProdutoDao *produtoDao;
        
    public:        
        CarrinhoDao* pegueCarrinhoDao();
        EstoqueDao* pegueEstoqueDao();
        PedidoDao* peguePedidoDao();
        ProdutoDao* pegueProdutoDao();
};