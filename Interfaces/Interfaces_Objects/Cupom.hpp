#include <iostream>
#include <string>
using namespace std;

class Cupom {
    private:
        string codigo;
        string descricao;     
        string desconto;
        string data_de_Inicio;
        string data_de_Fim;
        float valor_Minimo;   
    public:
        Cupom(string codigo, string descricao, string desconto, string data_de_Inicio, string data_de_Fim, float valor_Minimo);

        string pegueCodigo();
        void setCodigo(string codigo);

        string pegueDescricao();
        void setDescricao(string descricao);

        string pegueDesconto();
        void setDesconto(string desconto);

        string pegueData_de_Inicio();
        void setData_de_Inicio(string data_de_Inicio);

        string pegueData_de_Fim();
        void setData_de_Fim(string data_de_Fim);

        float pegueValor_Minimo();
        void setValor_Minimo(float valor_Minimo);

        void imprime();
};