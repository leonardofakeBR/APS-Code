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
        void definaCNPJ(int CNPJ);

        string pegueNome();
        void definaNome(string nome);

        string pegueTelefone();
        void definaTelefone(string telefone);

        string pegueEmail();
        void definaEmail(string email);

        string pegueEndereco();
        void definaEndereco(string endereco);

        string pegueContado_Principal();
        void definaContado_Principal(string contado_Principal);

        string pegueCondicoes_de_Entrega();
        void definaCondicoes_de_Entrega(string condicoes_de_Entrega);

        void imprime();
};