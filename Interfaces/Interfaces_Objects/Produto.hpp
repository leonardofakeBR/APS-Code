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
        void setIdProduto(int id_produto);

        string pegueNome();
        void setNome(string nome);

        float peguePreco();
        void setPreco(float preco);

        string pegueCategoria();
        void setCategoria(string categoria);

        void imprime();
};