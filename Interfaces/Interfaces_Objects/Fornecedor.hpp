#include <iostream>
#include <string>
using namespace std;

class Fornecedor {
    private:
        int CNPJ;
        string nome;
        string telefone;
        string email;
        string endereco;
        string contado_Principal;
        string condicoes_de_Entrega;
        
    public:
        Fornecedor(int CNPJ, string nome, string telefone, string email, string endereco, string contado_Principal, string condicoes_de_Entrega);

        int getCNPJ();
        void setCNPJ(int CNPJ);

        string getNome();
        void setNome(string nome);

        string getTelefone();
        void setTelefone(string telefone);

        string getEmail();
        void setEmail(string email);

        string getEndereco();
        void setEndereco(string endereco);

        string getContado_Principal();
        void setContado_Principal(string contado_Principal);

        string getCondicoes_de_Entrega();
        void setCondicoes_de_Entrega(string condicoes_de_Entrega);

        void imprime();
};