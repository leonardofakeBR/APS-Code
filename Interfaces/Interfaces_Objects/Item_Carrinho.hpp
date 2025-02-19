#include <iostream>
#include <string>
using namespace std;

#include <Produto.hpp>
#include <Carrinho.hpp>

class Item_Carrinho {
    private:
        int id;
        int quantidade;
        Produto* produto;
        Carrinho* carrinho;

    public:
    
        Item_Carrinho();

        Item_Carrinho(int id, int quantidade, Produto* produto, Carrinho* carrinho);

        int pegueId();
        void definaId(int id);

        int pegueQuantidade();
        void definaQuantidade(int quantidade);

        Produto* pegueProduto();
        void definaProduto(Produto* produto);

        Carrinho* pegueCarrinho();
        void definaCarrinho(Carrinho* carrinho);

};