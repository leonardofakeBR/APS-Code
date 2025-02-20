#include "Estoque.hpp"
#include "Produto.hpp"
#include "Fornecedor.hpp"

class Item {
private:
	int Id;
	Estoque* estoque;
	Produto* produto;
	Fornecedor* fornecedor;
	
public:
	int pegueId();
	void definaId(int);
	
	int pegueEstoque();
	void definaEstoque(Estoque*);
	
	int pegueProduto();
	void definaProduto(Produto*);
	
	int pegueFornecedor();
	void definaFornecedor(Fornecedor*);
	
};
