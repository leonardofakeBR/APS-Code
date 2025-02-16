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

        int pegueCNPJ();
        void setCNPJ(int CNPJ);

        string pegueNome();
        void setNome(string nome);

        string pegueTelefone();
        void setTelefone(string telefone);

        string pegueEmail();
        void setEmail(string email);

        string pegueEndereco();
        void setEndereco(string endereco);

        string pegueContado_Principal();
        void setContado_Principal(string contado_Principal);

        string pegueCondicoes_de_Entrega();
        void setCondicoes_de_Entrega(string condicoes_de_Entrega);

        void imprime();
};