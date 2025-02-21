#include "Estoque.hpp"
#include "Produto.hpp"
#include "Fornecedor.hpp"

class Item_Estoque {
private:
	int Id;
	Estoque* estoque;
	Produto* produto;
	Fornecedor* fornecedor;
	
public:
	Item_Estoque(int Id, Estoque* estoque, Produto* produto, Fornecedor* fornecedor);

	int pegueId();
	void definaId(int);
	
	Estoque* pegueEstoque();
	void definaEstoque(Estoque*);
	
	Produto* pegueProduto();
	void definaProduto(Produto*);
	
	Fornecedor* pegueFornecedor();
	void definaFornecedor(Fornecedor*);
	
};
