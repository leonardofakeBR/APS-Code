#include <iostream>
#include <string>
using namespace std;

class Produto {
    private:
        int id_produto;
        string nome;
        float preco;
        string categoria;
        
    public:
        Produto(int id_produto, string nome, float preco, string categoria);

        int pegueIdProduto();
        void definaIdProduto(int id_produto);

        string pegueNome();
        void definaNome(string nome);

        float peguePreco();
        void definaPreco(float preco);

        string pegueCategoria();
        void definaCategoria(string categoria);

        void imprime();
};