#include <iostream>
#include <string>
using namespace std;

class IFornecedor {
    private:
        string CNPJ;
        string nome;
        string telefone;
        string email;
        string endereco;
        string contado_Principal;
        string condicoes_de_Entrega;
        
    public:
        IFornecedor(string CNPJ, string nome, string telefone, string email, string endereco, string contado_Principal, string condicoes_de_Entrega);

        string getCNPJ();
        void setCNPJ(string CNPJ);

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