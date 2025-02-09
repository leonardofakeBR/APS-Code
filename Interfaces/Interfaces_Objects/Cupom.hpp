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

        string getCodigo();
        void setCodigo(string codigo);

        string getDescricao();
        void setDescricao(string descricao);

        string getDesconto();
        void setDesconto(string desconto);

        string getData_de_Inicio();
        void setData_de_Inicio(string data_de_Inicio);

        string getData_de_Fim();
        void setData_de_Fim(string data_de_Fim);

        float getValor_Minimo();
        void setValor_Minimo(float valor_Minimo);

        void imprime();
};