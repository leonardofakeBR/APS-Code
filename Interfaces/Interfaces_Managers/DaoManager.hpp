#include <iostream>
#include <string>
using namespace std;

#include <CupomDao.hpp>
#include <EstoqueDao.hpp>
#include <PedidoDao.hpp>
#include <ProdutoDao.hpp>

class DaoManager{
    private:
        CupomDao *cupomDao;
        EstoqueDao *estoqueDao;
        PedidoDao *pedidoDao;
        ProdutoDao *produtoDao;
        
    public:        
        CupomDao* pegueCupomDao();
        EstoqueDao* pegueEstoqueDao();
        PedidoDao* peguePedidoDao();
        ProdutoDao* pegueProdutoDao();
};