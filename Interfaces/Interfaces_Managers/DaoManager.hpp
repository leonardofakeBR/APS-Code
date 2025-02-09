#include <iostream>
#include <string>
using namespace std;

#include <CupomDao.hpp>
#include <EstoqueDao.hpp>
#include <FornecedorDao.hpp>
#include <PedidoDao.hpp>
#include <ProdutoDao.hpp>

class DaoManager{
    private:
        CupomDao *cupomDao;
        EstoqueDao *estoqueDao;
        FornecedorDao *fornecedorDao;
        PedidoDao *pedidoDao;
        ProdutoDao *produtoDao;
        
    public:        
        CupomDao* getCupomDao();
        EstoqueDao* getEstoqueDao();
        FornecedorDao* getFornecedorDao();
        PedidoDao* getPedidoDao();
        ProdutoDao* getProdutoDao();
};