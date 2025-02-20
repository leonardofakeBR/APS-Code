#include <iostream>
#include <string>
using namespace std;

class Cupom {
    private:
        string codigo;
        string descricao;     
        double desconto;
        string data_de_Inicio;
        string data_de_Fim;
        double valor_Minimo;   
    public:
        Cupom(string codigo, string descricao, double desconto, string data_de_Inicio, string data_de_Fim, double valor_Minimo);

        string pegueCodigo();
        void definaCodigo(string codigo);

        string pegueDescricao();
        void definaDescricao(string descricao);

        double pegueDesconto();
        void definaDesconto(double desconto);

        string pegueData_de_Inicio();
        void definaData_de_Inicio(string data_de_Inicio);

        string pegueData_de_Fim();
        void definaData_de_Fim(string data_de_Fim);

        double pegueValor_Minimo();
        void definaValor_Minimo(double valor_Minimo);

        void imprime();
};

