#include <iostream>
#include <string>
using namespace std;

class IProduto {
    private:
        int id_produto;
        string nome;
        float preco;
        string categoria;
        
    public:
        IProduto(int id_produto, string nome, float preco, string categoria);

        int getIdProduto();
        void setIdProduto(int id_produto);

        string getNome();
        void setNome(string nome);

        float getPreco();
        void setPreco(float preco);

        string getCategoria();
        void setCategoria(string categoria);

        void imprime();
};